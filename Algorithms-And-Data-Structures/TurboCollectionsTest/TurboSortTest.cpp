#include "TurboSort.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"


namespace TurboCollections
{
    namespace TurboSortTest
    {
        TEST(SortingTest, WorksTesting)
        {
            std::vector<int> list = TurboSort::TurboList();
            EXPECT_THAT(list, testing::ElementsAre(1,2,3,4,5));
        }
    }
}