#include "TurboBinarySearchTree.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace TurboCollections
{
 
       TEST(TestBinaryTree, TestingIfWorking)
       {
           Tree<int>* newTree = new Tree<int>();
           newTree->CreateNode(0);
           EXPECT_EQ(newTree->data,0);
           
           newTree->Left->CreateNode(0);
           EXPECT_EQ(newTree->data,0);
           
       }
    
}