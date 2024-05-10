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

            EXPECT_EQ(stack.top(),30);
            stack.pop();
            EXPECT_EQ(stack.top(),20);
            stack.pop();
            EXPECT_EQ(stack.top(),10);
            stack.pop();
            EXPECT_TRUE(stack.empty()); 
            EXPECT_EQ(stack.size(),0);//this one i dont know
        }

        TEST(LinkedStack, IteratorPlus)
        {
            TurboLinkedStack<int> stack;

            stack.push(10);
            stack.push(20);

            auto it = stack.begin();
            ++it;
            EXPECT_EQ(*it,10);
        }

        TEST(LinkedStack, IteratorAsterisk)
        {
            TurboLinkedStack<int> stack;

            stack.push(10);
            stack.push(20);
            stack.push(30);

            auto it = stack.begin();
            EXPECT_EQ(*it,30);
        }

        TEST(LinkedStack, IteratorEqual)
        {
            TurboLinkedStack<int> stack;
            stack.push(10);
            auto it = stack.begin();

            TurboLinkedStack<int> stack2;
            stack2.push(10);
            auto iterator = stack2.begin();

            EXPECT_EQ(*it,*iterator);
        }

        TEST(LinkedStack, IteratorNotEqual)
        {
            TurboLinkedStack<int> stack;
            stack.push(10);
            auto it = stack.begin();

            TurboLinkedStack<int> stack2;
            stack2.push(20);
            auto iterator = stack2.begin();

            EXPECT_NE(*it,*iterator);
        }
        
    }
}