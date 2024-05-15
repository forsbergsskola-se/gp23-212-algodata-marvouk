#include "TurboBinarySearchTree.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace TurboCollections
{
    namespace TurboBinarySearchTree
    {
       TEST(TestBinaryTree, TestingIfWorking)
       {
           Tree<int>* tree = new Tree<int>;
           EXPECT_EQ(tree->GetValue(1), 1);
           
       }
    }
}