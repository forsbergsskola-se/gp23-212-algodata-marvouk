#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace TurboCollections
{
    class Average
    {
    public:
        vector<int> average {};
        int addition = 0;
        int result = 0;
     void calcAverage()
    {
       for(int i = 0; i <= average.size(); i++)
       {
           addition += average[i];
       }
        result = addition / average.size();
    }
    
    };
}