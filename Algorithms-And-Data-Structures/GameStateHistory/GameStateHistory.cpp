#include <iostream>
#include <cstdlib>
#include "../TurboCollections/include/TurboLinkedStack.h"

using namespace std;

template <typename T>
class GameStateHistory
{
public:
    struct Node
    {
        T Value;
        Node* Previous;
        Node(const T& val) : Value(val), Previous(nullptr) {}//NEED CONSTRUCTOR
    };
    Node* lastNode;

    GameStateHistory() : lastNode(nullptr){}

     void inGame(const T& state)
    {
        cout<<"You are here: " << state<<"\n";
        cout<<"What do you want to do?";
        Node* nextNode = new Node(state);
        nextNode->Previous = lastNode;
        lastNode = nextNode;
    }

    void backChoice()
    {
        Node* backNode = lastNode->Previous;
        delete lastNode;
            lastNode = backNode;
            cout<< lastNode->Value;
    }

   void level1(){inGame("Go to Level 1");}
   void level2(){inGame("Go to Level 2");}
   void settings(){inGame("Go to Settings");}
    void mainMenu(){inGame("Go to MainMenu");}
   void goBack(){cout<<"You went back to ",backChoice();}
  static void quitGame(){cout<<"Game quitting..";}

    void choose()
    {
        char type;
        cin >> type;
        switch (type)
        {
        case '1':
            if(lastNode->Value=="Go to MainMenu"||lastNode->Value=="Go to Level 2")
                 level1();
            break;
        case '2':
            if(lastNode->Value=="Go to Level 1")
                level2();
            break;
        case '0':
            if(lastNode->Value=="Go to MainMenu")
                settings();
            break;
        case 'm':
            if(lastNode->Value=="Go to Level 1"||lastNode->Value=="Go to Level 2")
                mainMenu();
            break;
        case 'b':goBack();break;
        case 'q':quitGame();exit(0);//internet says this is how quit
            default:
                cout<<"Can't do that!";
                 break;
        }
    }
};

int main(int argc, char* argv[])
{
    GameStateHistory<string> stack;
    stack.inGame("Go to MainMenu");
    do
    {
        stack.choose();
    }while(stack.lastNode!=nullptr);
    
    return 0;
}
