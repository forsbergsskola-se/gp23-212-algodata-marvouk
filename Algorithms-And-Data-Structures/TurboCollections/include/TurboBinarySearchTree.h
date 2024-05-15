#pragma once
#include <iostream>
#include <vector>

template <typename T>
class Tree<T>                  //define Tree<T>
{
    T value;                //value : T
    Tree* Left = nullptr;     // left : Tree<T>
    Tree* Right = nullptr;     // right : Tree<T>
public:
    // nodes : T[]
    Tree* GetLeftChild()
    {
        return value*2+1;
    }

    Tree* GetRightChild()
    {
        return value*2+2;
    }

    Tree* GetValue()
    {
        return value;
    }

    Tree* SetValue(const T& val)
    {
        //set nodes at index n to value
        val = value;
        return val;
    }
};



/*template <typename T>
class Node<T>
{
    
};*/

