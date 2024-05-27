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
        else if (value < data)
        {
            if (left == nullptr)
                return false;
            else
                return left->Search(value);
        }
        else
        {
            if (right == nullptr)
                return false;
            else
                return right->Search(value);
        }
    }
/*
     bool Delete( T value)
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
    } */
};








