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
};

int main(int argc, char* argv[])
{
    GameStateHistory<string> stack;
    stack.inGame("MainMenu");
    
    return 0;
}
