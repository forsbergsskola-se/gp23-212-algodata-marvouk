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
        Node* parent = nullptr;
        Node* current = this;
        
            while (current != nullptr && current->data != value)
            {
            parent = current;
            if (value < current->data)//if less it moves to the left child
            {
                current = current->left;
            } else
            {
                current = current->right;
            }
        }
        if (current == nullptr)return false;//if not found returns false
        
            if (current->left == nullptr || current->right == nullptr)
            {
            Node* newCurrent;
             if (current->left == nullptr)
                {
                 newCurrent = current->right;
                } else
                {
                 newCurrent = current->left;
                }
            
            if (parent == nullptr)
            {
                if(newCurrent!= nullptr)
                {
                    this->data = newCurrent->data;
                    this->left = newCurrent->left ;
                    this->right =newCurrent->right;
                }else
                {
                    this->data = 0;
                    this->left = nullptr;
                    this->right = nullptr;
                }
                delete current;
                return true;
            }

            if (current == parent->left)
            {
                parent->left = newCurrent;
            } else
            {
                parent->right = newCurrent;
            }
            delete current;
        } else
            {
                const Node* min = FindMin(current->right);
            T minValue = min->data;
            Delete(min->data);
            current->data = minValue;
        }
        return true;
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








