#include "..\TurboCollections\include\BinarySearch.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace TurboCollections
{
 
       TEST(BinarySearch, TestingIfWorking)
       {
              std::vector<int> list{ 2, 3, 1, 5, 4, 19, 20, 80};
             int index =  BinarySearch<int>::binary_search(list,3);
              EXPECT_EQ(index, 1);
              
       }
    
}