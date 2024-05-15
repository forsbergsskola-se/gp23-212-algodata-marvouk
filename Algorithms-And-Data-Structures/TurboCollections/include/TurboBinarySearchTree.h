#pragma once
#include <iostream>
#include <vector>

template <typename T>
struct Tree                  //define Tree<T>
{
    T data;                //value : T
    Tree* Left;     // left : Tree<T>
    Tree* Right;     // right : Tree<T>

    Tree* CreateNode(T data)
    {
       Tree* newTree = new Tree();
        newTree->data = data;
        newTree->Left = newTree->Right = nullptr;
        return newTree;
    }
 
};


/*template <typename T>
class Node<T>
{
    
};*/

