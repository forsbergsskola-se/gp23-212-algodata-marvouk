#include "..\TurboCollections\include\BinarySearch.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace TurboCollections
{
 
       TEST(BinarySearch, TestingIfWorking)
       {
              std::vector<int> list{ 1, 2, 3, 4, 5, 6, 7, 8};
             int index =  BinarySearch<int>::binary_search(list,3);
              EXPECT_EQ(index, 2);
              
       }
    
}