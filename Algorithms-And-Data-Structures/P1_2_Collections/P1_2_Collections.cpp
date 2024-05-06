#include <vector>
#include <string>
#include <iostream>
#include <variant>
using namespace std;

int main(int argc, char* argv[])
{
    // vector in C++ is the same as List in C#
    vector<int> number{};
    number.push_back(137);
    number.push_back(1000);
    number.push_back(-200);
    
    auto iterator = number.begin();
    if(iterator != number.end())
    {
        for (auto value : number)
        {
            cout << *iterator<< "\n";
            ++iterator;
        }
    }
}