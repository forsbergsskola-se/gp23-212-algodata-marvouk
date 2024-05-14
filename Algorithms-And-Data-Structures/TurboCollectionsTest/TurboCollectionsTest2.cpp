#include "TurboSort.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace TurboCollections
{
    namespace TurboMaths
    {
        TEST(SayHello2, WorksWithoutTesting)
        {
            std::vector<int> list{ 2, 3, 1, 5, 4};
            TurboSort::TurboList(list);
            EXPECT_THAT(list, testing::ElementsAre(1,2,3,4,5));
        }

        TEST(TestBubbelSort, WorksWithoutTesting)
        {
            std::vector<int> list{ 2, 3, 1, 5, 4};
            TurboSort::BubbleSort(list);
            EXPECT_THAT(list, testing::ElementsAre(1,2,3,4,5));
        }

        TEST(TestQuickSort, WorksTesting)
        {
            std::vector<int> list{54, 25, 60, 5, 16, 7, 89, 9};
            TurboSort::QuickSort(list,0,list.size()-1);
            EXPECT_THAT(list, testing::ElementsAre(5,7,9,16,25,54,60,89));
        }
    }
}