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
        return new Node(data);
    }

    static Node* Insert(Node* root,T value)
    {
        if(root == nullptr)
        {
            return GetNewNode(value);
        }
        if(value == root->data)
        {
            value = root->data;
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

    static Node* Search(Node* root,T value)
    {
        if(root->data == value)
        {
            return root;
        }
        if(value > root->data)
        {
            root->right = Search(root->right,value);
        }
        if(value < root->data)
        {
            root->left = Search(root->left,value);
        }
        if(value)return root;
        if(!root->left || !root->right)
        {
            cout<<"There is not a subtree of ", root->left;
        }
        else
            cout<<"There is not a subtree of ", root->right;
        return nullptr;
    }

    static Node* Delete(Node* root, T value)
    {
        if(root->data == value)
        {
            delete root;
        }
        
        if(value > root->data)
        {
            root->right = Search(root->right,value);
            delete root->right;
        }
        if(value < root->data)
        {
            root->left = Search(root->left,value);
            delete root->left;
        }
        return nullptr;
    }
};








