
#include <iostream>
#include <vector>
#include "../TurboCollections/include/TurboMaths.h"
using namespace std;


int main(int argc, char* argv[])
{
    vector<int> number{1,1,2,3,5};
    
    for(auto it = number.begin(); it != number.end(); ++it)
    {
        std:: cout << *it;
    } 

    std::vector<int> even = TurboCollections::TurboMaths::GetEvenNumbersList(12);
    
    
    return 0;
}


