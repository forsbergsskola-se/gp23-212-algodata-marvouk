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

    bool Delete(T value) {
        Node* parent = nullptr;
        Node* current = this;

        // Find the node to be deleted and its parent
        while (current != nullptr && current->data != value) {
            parent = current;
            if (value < current->data) {
                current = current->left;
            } else {
                current = current->right;
            }
        }

        // If the node is not found
        if (current == nullptr) {
            return false;
        }

        // Case 1: Node with only one child or no child
        if (current->left == nullptr || current->right == nullptr) {
            Node* newCurr;

            if (current->left == nullptr) {
                newCurr = current->right;
            } else {
                newCurr = current->left;
            }

            // If the node to be deleted is the root node
            if (parent == nullptr) {
                this->data = newCurr ? newCurr->data : 0;
                this->left = newCurr ? newCurr->left : nullptr;
                this->right = newCurr ? newCurr->right : nullptr;
                delete current;
                return true;
            }

            // Set the parent to the new child
            if (current == parent->left) {
                parent->left = newCurr;
            } else {
                parent->right = newCurr;
            }
            delete current;
        } else {
            // Case 2: Node with two children
            Node* successor = FindMin(current->right);
            T successorValue = successor->data;
            Delete(successor->data);
            current->data = successorValue;
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








