#pragma once
#include <iostream>

using namespace std;

template <typename T>
struct Node
    {
        T data;
        Node* left;
        Node* right;
        Node* root = nullptr;
        Node() = delete;
    
    Node(T value): data(value), left(nullptr), right(nullptr)
        {
        }

    static Node* GetNewNode(T data)
    {
        return new Node(data);
    }

    void Insert(T value)
    {
        if (value < data)
            {
            if (left == nullptr)
            {
                left = GetNewNode(value);
            }
            else
                left->Insert(value);
        } else
            {
            if (right == nullptr)
            {
                right = GetNewNode(value);
            } else
                right->Insert(value);
        }
    }

    bool Search(T value)
    {
        if (data == value)
            return true;
         if (value < data)
        {
            if (left == nullptr)
                return false;
            return left->Search(value);
        }
            if (right == nullptr)
                return false;
        return right->Search(value);
    }

    bool Delete(T value)
    {
        if(value == data)return true;
        if()
        return false;
    }


    static Node* FindMin(Node* root)
    {
        while(root->left != nullptr)
        {
            root = root->left;
        }
        return root;
    } 
};








