#include "TurboMaths.h"
#include <iostream>

void TurboCollections::TurboMaths::SayHello()
{
    std::cout << "Hello, I'm " << typeid(TurboMaths).name() << "\n";
}
