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
    int GetLeftChild(int n)
    {
        Left = n*2+1;
        return Left;
    }

    int GetRightChild(int n)
    {
        Right = n*2+2;
        return Right;
    }

    int GetValue(int n)
    {
        return value[n];
    }
    

    void SetValue(int n, T& val)
    {
        value[n] = val;
    }
};



/*template <typename T>
class Node<T>
{
    
};*/

