#include "TurboMaths.h"
#include <iostream>

namespace TurboCollections
{
void TurboCollections::TurboMaths::SayHello()
{
    std::cout << "Hello, I'm " << typeid(TurboMaths).name() << "\n";
}
    
}


