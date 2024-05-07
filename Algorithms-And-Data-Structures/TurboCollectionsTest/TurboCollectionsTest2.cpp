#include "TurboSort.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace TurboCollections
{
    namespace TurboMaths
    {
        TEST(SayHello2, WorksWithoutTesting)
        {
            std::vector<int> list{ 5, 3, 1, 2, 4};
            TurboSort::TurboList(list);
            EXPECT_THAT(list, testing::ElementsAre(1,2,3,4,5));
        }
    }
}