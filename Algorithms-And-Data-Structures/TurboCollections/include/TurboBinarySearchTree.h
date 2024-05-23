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
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            }
            else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
        }
        return root;
    }

    void Traverse(Node* n)
    {
        if(n != nullptr)
        {
         Traverse(n->left);
          Visit(n);
         Traverse(n->right);
        }
    }

    static Node* Visit(Node* n)
    {//Else: Search either for the Maximum of the left sub-tree (go left and then always right until you find a leaf)
        //or the Minimum of the right sub-tree
        //(go right and then always left) and replace the node with the leaf you just found.
        Node* min = n;
        while(min->right != nullptr)
        {
            min = n->right;
        }
        return min;
    }
};








