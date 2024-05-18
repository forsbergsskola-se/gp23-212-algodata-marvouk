
#include "../TurboCollections/include/TurboSearch.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"


namespace TurboCollections
{
    
    namespace TurboSearchTest
    {
        TEST(SearchTree, TestIfFindItem5)
        {
            std::vector<int> list{ 2, 3, 1, 5, 4};
             int index = TurboSearch<int>::linear_search(list, 5);
            EXPECT_EQ(index,3);

            int index2 = TurboSearch<int>::linear_search(list, 6);
            EXPECT_NE(index2,3);
            
        }
    }
}
