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

    static bool Search(Node* root,T value)
    {
        if(root == nullptr)return false;
        
        if(value > root->data)
        {
            return Search(root->right,value);
        }
        else if (value < root->data)
        {
            return Search(root->left,value);
        }
        return true;
    }

    static bool Delete(Node* root, T value)
    {
        if(root == nullptr)return false;
        if(value > root->data)
           return Delete(root->right,value);
        if (value < root->data)
          return Delete(root->left,value);
        
        {
            if(root->left == nullptr && root->right == nullptr)
            {
                delete root;
                root = nullptr;
            }
            else if (root->left == nullptr) {
                const Node* temp = root;
                root = root->right;
                delete temp;
            }
            else if(root->right == nullptr) {
                const Node* temp = root;
                root = root->right;
                delete temp;
            }
            else
            {
                Node* temp = FindMin(root->right);
                root->data = temp->data;
                 Delete(root->right, temp->data);
            }
        return true;
        }
    }

    void Traverse(Node* n)
    {
        if(n != nullptr)
        {
         Traverse(n->left);
            printf("Visiting node: %d/n", n->data); 
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








