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

        TEST(BinarySearchTreeSearch,SearchItem)
        {
            Node<int>* node = Node<int>::GetNewNode(10);
            node->Insert(3);
            node->Insert(5);
            EXPECT_TRUE(node->Search(5));
            EXPECT_FALSE(node->Search(1));
        }

        TEST(DeleteItem,DeletingItem)
        {
            Node<int>* node = Node<int>::GetNewNode(10);
            node->Insert(3);
            node->Insert(5);
            node->Delete(5);
            EXPECT_FALSE(node->Search(5));
        }

        TEST(BinarySearchTreeDelete, ReturnsTrueIfItemFound){
            Node<int>* node = Node<int>::GetNewNode(10);
            node->Insert(3);
            node->Insert(5);
            node->Insert(1);
            EXPECT_TRUE(node->Delete(5));
        }

        TEST(BinarySearchTreeDelete, ReturnsFalseIfItemNotFound){
            Node<int>* node = Node<int>::GetNewNode(10);
            node->Insert(3);
           node->Insert(5);
            node->Insert(1);
            EXPECT_FALSE(node->Delete(4));
        }

        TEST(BinarySearchTreeDelete, RemovesFoundItem){
            Node<int>* node = Node<int>::GetNewNode(10);
           node->Insert(3);
           node->Insert(5);
            node->Insert(1);
           node->Delete(5);
            EXPECT_FALSE(node->Search(5));
            
        }

        TEST(InOrderTRaversal, testinginorder)
        {
                Node<int>* node = Node<int>::GetNewNode(10);
                node->Insert(8);
                node->Insert(19);
                node->Insert(5);
                node->Insert(13);
                node->Insert(12);
                node->Insert(3);
                node->Delete(12);
                node->InOrderTraversal();
        }

        TEST(TestReversePattern,TestingReverse)
        {
            const std::vector<int> vec = {8,19,5,13,12,3};

            const auto iteratorB = vec.rbegin();
            const auto iteratorE = vec.rend();
            if(iteratorB != iteratorE)
            {
                for (auto iterate = iteratorB; iterate != iteratorE; iterate++)
                {
                    std::cout << *iterate << ",";
                }
            }
        }

        TEST(CloneTree, TestingClone)
        {
            Node<int>* node = Node<int>::GetNewNode(10);
            node->Insert(8);
            node->Insert(19);
           node->CloneTree(node);
            node->Delete(19);
        }

        TEST(DeleteNodeByNode, DeletingNodeByNode)
        {
            Node<int>* node = Node<int>::GetNewNode(10);
            node->Insert(8);
            node->Insert(19);
            node->Insert(5);
            node->DeleteNodeByNode(node);
        }
    }
}
