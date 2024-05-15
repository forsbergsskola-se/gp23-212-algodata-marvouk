#pragma once
#include <iostream>
#include <vector>

template <typename T>
class Tree                  //define Tree<T>
{
    T data;                //value : T
    Tree* Left;     // left : Tree<T>
    Tree* Right;     // right : Tree<T>
public:
    Tree* CreateNode(T data)
    {
        Tree* newRoot = new Tree();
        return newRoot;
    }
};



/*template <typename T>
class Node<T>
{
    
};*/

