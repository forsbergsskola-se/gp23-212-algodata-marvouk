#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../TurboCollections/include/TurboBinarySearchTree2Bool.h"

namespace TurboCollections
{
    namespace TurboBinarySearchTree2Bool
    {
        TEST(BinarySearchTreeDelete, ReturnsTrueIfItemFound){
            Node<int>* node = Node<int>::GetNewNode(10);
            node->Insert(node,3);
            node->Insert(node,5);
            node->Insert(node,1);
            
            EXPECT_TRUE(node->Search(node,5));
            node->Delete(node,5);
            EXPECT_FALSE(node->Search(node,5));
        }

 
    }
}
