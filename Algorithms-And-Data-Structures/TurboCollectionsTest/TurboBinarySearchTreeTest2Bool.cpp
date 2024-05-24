#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../TurboCollections/include/TurboBinarySearchTree2Bool.h"

namespace TurboCollections
{
    namespace TurboBinarySearchTree2Bool
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

            node->Search(node,10);
            EXPECT_TRUE(node->data==10);
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
            EXPECT_TRUE(node->left->data== 5);

            node->Search(node->left,2);
            EXPECT_TRUE(node->left->left->data==2);
            
            EXPECT_FALSE(node->left->data== 4);
           
        }

        
        TEST(DeleteFunction, TestingDelete)
        {
            Node<int>* node = Node<int>::GetNewNode(10);
            EXPECT_EQ(node->data,10);

            node->Insert(node,5);
            EXPECT_TRUE(node->left->data==5);

            node->Insert(node->left,2);
            EXPECT_TRUE(node->left->left->data==2);

            node->Search(node,5);
            EXPECT_TRUE(node->left->data==5);

            node->Search(node->left,2);
            EXPECT_TRUE(node->left->left->data==2);
            
            node->Delete(node,5);
            EXPECT_TRUE(node->left->data!=5);

            node->Search(node,5);
            EXPECT_TRUE(node->left->data!=5);
            EXPECT_TRUE(node->left->data==2);
        } 
    }
}
