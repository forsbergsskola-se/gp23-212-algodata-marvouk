
#include <iostream>
#include <vector>
#include "TurboMaths.h"
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> numbers{};
    numbers.push_back(1);
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(5);
    
    for (int& number : numbers){
        cout << number << "\n";
    }

   vector<int> list = TurboCollections::TurboMaths::GetEvenNumbersList(15);
   for(int& number : list)
   {
       cout<<number<<" ";
       //{} it doesnt give -1
   }
    
    return 0;
}




