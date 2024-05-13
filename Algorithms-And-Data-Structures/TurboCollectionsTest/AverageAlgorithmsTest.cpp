#include "Average.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"


namespace TurboCollections
{
        TEST(Average, WorksWithoutTesting)
        {
           Average ave ;
            ave.average = {5,5,5,5};
            ave.calcAverage();
            EXPECT_EQ(ave.result,5);
        }
    
}