#pragma once
#include <iostream>
#include <vector>

template <typename T>
class TurboLinkedQueue 
{
    class Node
    {
    public:
        T Value;
        // But we store the Next Node for each Node instead.
        Node* Next;
    };
    // Also, we store the first instead of the last Node. First Come, First Serve.
    Node* FirstNode = nullptr;

public :
    void Enqueue(T value){
        // This is a bit more complicated. You need to let the last Node in the Queue know who's next after him.
        // No other choice but looping through your Nodes until you reach the end.
        // You know that you've reached the end, if the current Node's Next Node is null.
        // Then, you assign a new Node containing the value to the current node's Next field.
       Node* newNode = new Node(value);
       newNode->Next = FirstNode;
       FirstNode = newNode;
       while(!newNode == nullptr)
       {
           return;
       }
        
    }

    // Everything else is super similar to the TurboLinkedStack!
};


