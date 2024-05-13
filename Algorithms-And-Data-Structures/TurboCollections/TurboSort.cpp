#include "TurboSort.h"

#include <list>
using namespace std;
void TurboCollections::TurboSort::TurboList(std::vector<int>&list)
{
    int n;
    n = list.size();

    for(int i = 0; i < n-1; i++)
    {
        int min = i;
        for(int j = i + 1; j < n; j++)
        {
            if (list[j] < list[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            std::swap(list[i], list[min]);
        }
    }
}

void TurboCollections::TurboSort::BubbleSort(std::vector<int>&bubbleList)
{
    int n;
    n= bubbleList.size();
    for(int i = n-1; i > 0; --i)
    {
        bool swapped = false;
         for(int j = 0; j < i; j++)
         {
             if (bubbleList[j] > bubbleList[j+1])
             {
                 swap(bubbleList[j],bubbleList[j+1]);
                 swapped=true;
             }
         }
        if(!swapped)
        {
            break;
        }
    }
}


