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
    }
}
