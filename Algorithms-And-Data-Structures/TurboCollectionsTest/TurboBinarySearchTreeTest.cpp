#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../TurboCollections/include/TurboBinarySearchTree.h"

namespace TurboCollections
{
    namespace TurboBinarySearchTree
    {
        TEST(BinarySearchTree, TestAddingRoot)
        {
            Node<int>* node = Node<int>::GetNewNode(10);
            EXPECT_EQ(node->data,10);
        }

        TEST(SearchFunction, TestingSearch)
        {
            Node<int>* node = Node<int>::GetNewNode(10);
            EXPECT_EQ(node->data,10);

            const Node<int>* searchNode = Node<int>::Search(node,10);
            EXPECT_EQ(searchNode->data,10);
        }

        TEST(InsertFunction, TestingInsert)
        {
            Node<int>* node = Node<int>::GetNewNode(10);
            EXPECT_EQ(node->data,10);

            const Node<int>* insertNodeLeft = Node<int>::Insert(node,5);
            EXPECT_EQ(insertNodeLeft->left->data,5);

            const Node<int>* insertNodeRight = Node<int>::Insert(node,15);
            EXPECT_EQ(insertNodeRight->right->data,15);
            
        }
    }
}
