#include "..\TurboCollections\include\TurboBinaryTree.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace TurboCollections
{
    namespace TurboBinaryTree
    {
        TEST(BinaryTree,TestRoot)
        {
            Tree<int> tree;
            tree.nodes = std::vector<int>(10);

            tree.SetValue(0,10);
            EXPECT_EQ(tree.GetValue(0),10);
        }

        TEST(BinaryTree,TestLeftChild)
        {
            Tree<int> tree;
            tree.nodes = std::vector<int>(10);

            tree.SetValue(0,10);
            EXPECT_EQ(tree.GetValue(0),10);
        }
    }
    
}