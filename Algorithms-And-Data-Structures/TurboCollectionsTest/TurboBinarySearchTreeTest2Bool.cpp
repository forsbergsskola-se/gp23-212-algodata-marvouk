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
        
    }
}
