#pragma once
#include <iostream>
#include <vector>

template <typename T>
class Tree                
{
public:
    std::vector<T> nodes;
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


