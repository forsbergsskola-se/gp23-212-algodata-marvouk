#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "TurboSort.h"


namespace TurboCollections
{
    namespace TurboSortTest
    {
        TEST(SortingTest, WorksTesting)
        {
            std::vector<int> list = TurboSort::TurboList();
            EXPECT_THAT(list, testing::ElementsAre(1,2,3,4));
        }
    }
}