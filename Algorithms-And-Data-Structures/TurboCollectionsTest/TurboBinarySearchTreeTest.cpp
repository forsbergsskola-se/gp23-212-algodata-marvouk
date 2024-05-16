#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../TurboCollections/include/TurboBinarySearchTree.h"

namespace TurboCollections
{
    namespace TurboBinarySearchTree
    {
        TEST(BinarySearchTree, TestIfWorking)
        {
            Node<int>* node = Node<int>::GetNewNode(10);
            EXPECT_EQ(node->data,10);
            node->Insert(node,5);
            EXPECT_EQ(node->left->data,5);
            node->Insert(node,11);
            EXPECT_EQ(node->right->data,11);
            
            node->Search(node,5);
            EXPECT_NE(node->data,5);
            node->Search(node,5);
            EXPECT_EQ(node->left->data,5);
            node->Search(node,11);
            EXPECT_EQ(node->right->data,11);
        }
        

    }
}
