#pragma once
#include <iostream>
#include <vector>

template <typename T>
class TurboLinkedStack<T>
{
    struct Node
    {
        T Value;
        Node* Previous;
    };
    Node* lastNode;
public:
    void push(const T& item)
    {
        // Insert Code from AddNumber Example in #4 here
        throw "NotImplementedException()";
      
    }

    T& top() {
       
        // Return the Value of Last Node here.
        lastNode->Value;
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
        lastNode->Previous = lastNode;
    }
    
    bool empty() const {
        // Return true, if the LastNode is null
        if(lastNode == nullptr)return true;
    }

    size_t size() const {
        
        // Here, you need to do a while loop over all nodes
        // Similar to the previous PrintAllNodes Function
        // But instead of Printing Nodes, you just count how many Nodes you have visited
        // Similar to this:
        size_t count = 0;
        while(lastNode != nullptr){
            count++;
            lastNode = lastNode->Previous;
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

        Iterator<T>& operator++() {
            throw "NotImplementedException()";
            // Make currentNode point to currentNode's previous node
            return *this;
        }

        T& operator*() const {
            throw "NotImplementedException()";
            // Return the value of the CurrentNode
        }

        bool operator==(const Iterator<T>& other) const {
            throw "NotImplementedException()";
            // return true if both operators have the same current node
        }
        bool operator!=(const Iterator<T>& other) const {
            throw "NotImplementedException()";
            // return true if both operators have different current nodes
        }
    };

    Iterator<T> begin() {
        throw "NotImplementedException()";
        return Iterator<T>(LastNode);
    }
    
    Iterator<const T> begin() const {
        throw "NotImplementedException()";
        return Iterator<const T>(LastNode);
    }
};