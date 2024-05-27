#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../TurboCollections/include/TurboBinarySearchTree2Bool.h"

namespace TurboCollections
{
    namespace TurboBinarySearchTree2Bool
    {
        TEST(BinarySearchTreeInsert,InsertItem){
            Node<int>* node = Node<int>::GetNewNode(10);
            node->Insert(3);
            node->Insert(5);
            node->Insert(1);
            
        }



        
        TEST(BinarySearchTreeDelete, ReturnsTrueIfItemFound){
            Node<int>* node = Node<int>::GetNewNode(10);
            node->Insert(3);
            node->Insert(5);
            node->Insert(1);
            
            EXPECT_TRUE(node->Search(5));
            node->Delete(node,5);
            EXPECT_FALSE(node->Search(5));
        }
    }
}
