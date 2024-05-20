#pragma once
#include <iostream>
#include <vector>

template <typename T>
class Tree                  //define Tree<T>
{
public:
    T data;                //value : T
    Tree* Left;     // left : Tree<T>
    Tree* Right;     // right : Tree<T>
    std::vector<T> nodes;
    
    Tree(T value) : data(value), Left(nullptr), Right(nullptr) {}//constr


    static T GetLeftChild( T n)
    {
        return n * 2 + 1;
    }

    static T GetRightChild(T n)
    {
        return n * 2 + 2;
    }

     T GetValue(T n)
    {
     return nodes[n]; // return nodes at index n
    }

    void SetValue(T n, T value)
    {
        nodes[n] = value; //set nodes at index n to value
    }
};

/*
template <typename T>
struct Node
{
    T index = 0;
    Tree<T>* tree = nullptr;
    
     Node* GetLeftChild()
    {
        return new Node(tree,tree->GetLeftChild(index));
    }
    T GetValue()
    {
      return tree->GetValue(index);
    }

     void SetValue(T value)
    {
        return tree->SetValue(index, value);
    }
};*/

