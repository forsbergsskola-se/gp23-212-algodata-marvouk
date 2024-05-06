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
    }
}