#include "TurboBinarySearchTree.h"

template <typename T>
class TurboBinarySearchTree
{
    Node* GetNewNode(int data)
    {
      Node* newNode = new Node();
     newNode->data = data;
     newNode->left = newNode->right = nullptr;
      return newNode;
    }

    const Node* Insert(const Node* root, int data)
    {
        if(root == nullptr)
        {
            root = GetNewNode(data);
        }
        else if(data <= root->data)
        {
            root->left = Insert(root->left,data);
        }
        else
        {
            root->right = Insert(root->right,data);
        }
        return root;
    }
    static bool Search(const Node* root, int data)
    {
        if(root->data == NULL)
        {
            return false;
        }
        if(root->data == data)
        {
            return true;
        }
         if (data <= root-> data)
        {
            return Search(root->left,data);
        }
        else
            return Search(root->right,data);
    }
};

