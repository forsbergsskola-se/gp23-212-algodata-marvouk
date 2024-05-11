#include <iostream>
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
        backNode->Previous = lastNode;
        lastNode = backNode;
        cout<< lastNode->Value;
        delete backNode;//dont know1
    }

   void level1(){inGame("Go to Level 1");}
   void level2(){inGame("Go to Level 2");}
   void settings(){inGame("Go to Settings");}
   void goBack(){backChoice();}
   void quitGame(){inGame("Game quitting..");}

    void choose()
    {
        char type;
        cin >> type;
        switch (type)
        {
        case '1':level1();break;
        case '2':level2();break;
        case '0':settings();break;
        case 'b':goBack(); break;
        case 'q':quitGame();break;
            default:cout<<"Can't do that!";
            break;
        }
    }
};

int main(int argc, char* argv[])
{
    GameStateHistory<string> stack;
    stack.inGame("MainMenu");
    while(stack.lastNode!=nullptr)//
    {
        stack.choose();
    }
    
    return 0;
}
