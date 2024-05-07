#pragma once
#include <iostream>
#include <vector>

namespace TurboCollections
{
    
    class TurboMaths
    {
        TurboMaths() = delete;////
        public:
        static void SayHello();
        
        static std::vector<int> GetEvenNumbersList(int maxNumber)
        {
            std::vector<int> numbers;
    
            for(int i = 0; i < maxNumber; i++)
            {
                if(i % 2 == 0)
                {
                    numbers.push_back(i);
                }
            }
            return numbers;
        }
    };
   

}
