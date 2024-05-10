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

    void backChoice(const T& backState)
    {
        Node* backNode = new Node(backState);
        backNode->Value = lastNode->Previous;
        lastNode = backNode;
        cout<<lastNode;
    }

  static void level1(){cout<<"Go to Level 1";}
  static void level2(){cout<<"Go to Level 2";}
  static void settings(){cout<<"Go to Settings";}
  static void goBack(){cout<<"You went back to ";}
  static void quitGame(){cout<<"Game quitting..";}

    void choose()
    {
        char type;
        cin >> type;
        switch (type)
        {
        case '1':level1();break;
        case '2':level2();break;
        case '0':settings();break;
        case 'b':goBack();break;
        case 'q':quitGame();break;
        }
    }
};

int main(int argc, char* argv[])
{
    GameStateHistory<string> stack;
    stack.inGame("MainMenu");
    stack.choose();
    
    return 0;
}
