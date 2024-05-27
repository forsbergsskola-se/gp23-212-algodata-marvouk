#pragma once
#include <iostream>
using namespace std;

template <typename T>
struct Node
    {
        T data;
        Node* left;
        Node* right;
        Node* root;
    
        Node() = delete;
    
    Node(T value): data(value), left(nullptr), right(nullptr), root(nullptr)
        {
        }

    static Node* GetNewNode(T data)
    {
        return new Node(data);
    }

        Node* Insert(T value)
        {
            if (root == nullptr)
            {
                root->GetNewNode(value);
                return root;
            }
            if (value < root->data)
            {
                root->left = Insert(value);
            }
            if(value > root->data)
            {
               root->right = Insert(value);
            }
            return root;
        }

     bool Search(T value)
    {
        if(root == nullptr)return false;
        
        if(value > root->data)
        {
             Search(value);
        }
        else if (value < root->data)
        {
             Search(value);
        }
        return true;
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
                return temp;
            }
            else if(root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            else
            {
                Node* temp = FindMin(root->right);
                root->data = temp->data;
                root->right = Delete(root->right, temp->data);
                return temp;
            }
        }
        return nullptr;
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








