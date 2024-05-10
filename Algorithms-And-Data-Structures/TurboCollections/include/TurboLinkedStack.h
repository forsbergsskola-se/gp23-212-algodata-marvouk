#pragma once
#include <iostream>
#include <vector>

template <typename T>
class TurboLinkedStack
{
    struct Node
    {
        T Value;
        Node* Previous;
        Node(const T& val) : Value(val), Previous(nullptr) {}//NEED CONSTRUCTOR
    };
    Node* lastNode;
public: 
    TurboLinkedStack() : lastNode(nullptr){}

    void push(const T& item)
    {
        // Insert Code from AddNumber Example in #4 here
        Node* newNode = new Node(item); //New_Node = New_Node(Data)
        newNode->Previous = lastNode; //New_Node.Prev = Last
        lastNode = newNode;//last = New_Node
    }

    T& top() {
        // Return the Value of Last Node here.
       return lastNode->Value;
    }

    const void pop()
    {
        // Assign the Last Node's Previous Node to be the Last Node.
        // -- This effectively removes the previously Last Node of the Stack
        // -- Imagine LastNode is customer 436
        // -- -- who remembered that customer 435 was before him.
        // -- We assign that before customer 435 to LastNode.
        // -- -- 435 knows that 434 was before him.
        // -- -- But he has no memory of customer 436.
        if(lastNode!=nullptr)
            lastNode = lastNode->Previous;
    }
    
    bool empty() const {
        // Return true, if the LastNode is null
        return lastNode == nullptr;
    }

    size_t size() const {
        
        // Here, you need to do a while loop over all nodes
        // Similar to the previous PrintAllNodes Function
        // But instead of Printing Nodes, you just count how many Nodes you have visited
        // Similar to this:
        size_t count = 0;
        while(lastNode != nullptr)
        {
            count++;
            lastNode->Previous = lastNode;
        }
        return count;
    }

    template<typename T>
    class Iterator{
        Node* currentNode;
        
    public:
        Iterator(Node* startAtNode) {
            currentNode = startAtNode;
        }

        Iterator<T>& operator++()
        {
            // Make currentNode point to currentNode's previous node
            currentNode = currentNode->Previous;
            return *this;
        }

        T& operator*() const
        {
            // Return the value of the CurrentNode
            return currentNode->Value;
        }

        bool operator==(const Iterator<T>& other) const
        {
            // return true if both operators have the same current node
            return currentNode == other.currentNode;
        }
        bool operator!=(const Iterator<T>& other) const
        {
            // return true if both operators have different current nodes
            return currentNode != other.currentNode;
        }
    };

    Iterator<T> begin()
    {
        return Iterator<T>(lastNode);
    }
    
    Iterator<const T> begin() const {
        return Iterator<const T>(lastNode);
    }
}; 