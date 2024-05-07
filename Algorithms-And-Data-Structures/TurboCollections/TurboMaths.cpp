#include "TurboMaths.h"
#include <iostream>

void TurboCollections::TurboMaths::SayHello()
{
    std::cout << "Hello, I'm " << typeid(TurboMaths).name() << "\n";
}

std::vector<int> TurboCollections::TurboMaths::GetEvenNumbersList(int number)
{
    std::vector<int> addNumber;
    
    for(int i = 0; i < number; i++)
    {
        if(i % 2 == 0)
        {
            addNumber.push_back(i);
        }
    }
    return addNumber;
}


