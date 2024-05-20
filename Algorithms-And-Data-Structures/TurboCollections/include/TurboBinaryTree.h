#pragma once
#include <iostream>
#include <vector>

template <typename T>
class Tree                  //define Tree<T>
{
    T data;                //value : T
    Tree* Left;     // left : Tree<T>
    Tree* Right;     // right : Tree<T>
    
    Tree(T value) : data(value), Left(nullptr), Right(nullptr) {}//constr
    
    
    static Tree*  GetLeftChild( T n)
    {
        return n * 2 + 1;
    }

    static Tree* GetRightChild(T n)
    {
        return n * 2 + 2;
    }

    static Tree* GetValue(T n)
    {
     return data[n]; // return nodes at index n
    }

    static Tree* SetValue(T n,T value)
    {
       value = data[n] ; //set nodes at index n to value
       return value;
    }
};


template <typename T>
struct Node
{
    T index = 0;
    Tree<T>* tree = new Tree<T>;
    
    static Node* GetLeftChild()
    {
        return new Node(tree->GetLeftChild(index));
    }
   static Node* GetValue()
    {
      return tree->GetValue(index);
    }

    static Node*  SetValue(T value)
    {
        return tree.SetValue(index, value);
    }
};

