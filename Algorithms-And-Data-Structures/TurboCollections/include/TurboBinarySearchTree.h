#pragma once
#include <iostream>
#include <vector>

template <typename T>
class TurboBinarySearchTree
{
    struct Node
    {
        T Data;
        Node* Left;
        Node* Right;
        //NEED CONSTRUCTOR?
        Node(const T& data): Data(data), Left(nullptr), Right(nullptr);
    };

    Node* root;
public:
    TurboBinarySearchTree(): root(nullptr){}
  
};

