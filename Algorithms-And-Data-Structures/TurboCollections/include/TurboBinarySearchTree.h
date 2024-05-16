#pragma once
#include <iostream>
using namespace std;
template <typename T>
struct Node
    {
        T data;
        Node* left;
        Node* right;
    
        Node() = delete;
    
    Node(T value): data(value), left(nullptr), right(nullptr){}
    
    static Node* GetNewNode(T data)
    {
        Node<int>* newNode = new Node(data);
        return newNode;
    }

    static Node* Insert(Node* root,T value)
    {
        if(root == nullptr)
        {
            return GetNewNode(value);
        }
        if(value < root->data)
        {
            root->left = Insert(root->left, value);
        }
        else
        {
            root->right = Insert(root->right, value);
        }
        return root;
    }
};








