#include "TurboLinkedStack.h"
#include "TurboMaths.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"


namespace TurboCollections
{
    namespace TurboLinkedStackTests
    {
        TEST(LinkedStack, TurboLinkedStack)
        {
            TurboLinkedStack<int> stack;
            
            stack.push(10);
            stack.push(20);
            stack.push(30);

            assert(stack.top(),30);
            stack.pop();
            assert(stack.top(),20);
            stack.pop();
            assert(stack.top(),10);
            stack.pop();
            EXPECT_TRUE(stack.empty());
        }
    }
}