#include "TurboMaths.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace TurboCollections
{
    namespace TurboMathsTest
    {
        TEST(SayHello, WorksWithoutTesting)
        {
            TurboCollections::TurboMaths::SayHello();

            SUCCEED();
        }

        TEST(EvenNumbers, Testing)
        {
            std::vector<int> list = TurboMaths::GetEvenNumbersList(12);
            EXPECT_THAT(list, testing::ElementsAre(0, 2, 4, 6, 8, 10, 12));
        }
    }
}