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
           else if (value < root->data)
           {
              root->left = Search(root->left,value);
           }
        
        return nullptr;
    }

    static Node* Delete(Node* root, T value)
    {
        if(root== nullptr)return root;
        if(value > root->data)
            root->right = Delete(root->right,value);
        else if (value < root->data)
            root->left = Delete(root->left,value);
        else
        {
            if(root->left == nullptr && root->right == nullptr)
            {
                delete root;
                root = nullptr;
            }
            else if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
            }
            else if(root->right == nullptr) {
                Node* temp = root->left;
                delete root;
            }
            else
            {
                Node* temp = FindMin(root->right);
                root->data = temp->data;
                root->right = Delete(root->right, temp->data);
            }
        }
        return root;
    }

    void Traverse(Node* n)
    {
        if(n != nullptr)
        {
         Traverse(n->left);
         Traverse(n->right);
        }
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








