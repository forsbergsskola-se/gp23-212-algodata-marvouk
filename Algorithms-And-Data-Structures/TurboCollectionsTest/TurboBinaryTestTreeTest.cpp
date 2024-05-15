#include "TurboBinarySearchTree.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace TurboCollections
{
 
       TEST(TestBinaryTree, TestingIfWorking)
       {
           Tree<int>* newTree = Tree<int>::CreateNode(0);
           newTree->CreateNode(0);
           EXPECT_EQ(newTree->data,0);
           
           newTree->Left = Tree<int>::CreateNode(1);
           EXPECT_EQ(newTree->Left->data,1);

           newTree->Left->Left = Tree<int>::CreateNode(3);
           EXPECT_EQ(newTree->Left->Left->data,3);

           newTree->Right = Tree<int>::CreateNode(2);
           EXPECT_EQ(newTree->Right->data,2);
       }
    
}