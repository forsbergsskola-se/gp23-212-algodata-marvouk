#include "TurboSort.h"

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


