#pragma once
#include <iostream>
#include <vector>

template <typename T>
struct Tree                  //define Tree<T>
{
    T data;                //value : T
    Tree* Left;     // left : Tree<T>
    Tree* Right;     // right : Tree<T>

    Tree(T value) : data(value), Left(nullptr), Right(nullptr) {}//constr
    
    static Tree* CreateNode(T data)
    {
        return new Tree(data);
    }
 
};


/*template <typename T>
class Node<T>
{
    
};*/

