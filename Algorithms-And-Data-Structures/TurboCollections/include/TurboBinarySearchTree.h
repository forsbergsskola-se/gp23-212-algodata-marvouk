#pragma once
#include <iostream>
using namespace std;
struct Node
{
        int data;
        Node* left;
        Node* right;
};
Node* root = nullptr;
    
static Node* GetNewNode(int data);
const Node* Insert(Node* root,int data);
bool Search(Node* root,int data);




