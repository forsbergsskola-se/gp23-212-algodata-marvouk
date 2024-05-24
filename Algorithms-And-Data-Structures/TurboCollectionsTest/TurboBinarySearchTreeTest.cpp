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

            node->Insert(node,5);
            EXPECT_EQ(node->left->data,5);

            node->Insert(node->left,2);
            EXPECT_EQ(node->left->left->data,2);

            node->Search(node,5);
            EXPECT_EQ(node->left->data, 5);

            node->Search(node->left,2);
            EXPECT_EQ(node->left->left->data,2);
            
            EXPECT_NE(node->left->data, 4);
           
        }

        
        TEST(DeleteFunction, TestingDelete)
        {
            Node<int>* node = Node<int>::GetNewNode(10);
            EXPECT_EQ(node->data,10);

            node->Insert(node,5);
            EXPECT_EQ(node->left->data,5);

            node->Insert(node->left,2);
            EXPECT_EQ(node->left->left->data,2);

            node->Search(node,5);
            EXPECT_EQ(node->left->data, 5);

            node->Search(node->left,2);
            EXPECT_EQ(node->left->left->data,2);
            
            node->Delete(node,5);
            EXPECT_NE(node->left->data,5);

            node->Search(node,5);
            EXPECT_NE(node->left->data,5);
            EXPECT_EQ(node->left->data,2);
        } 
    }
}
