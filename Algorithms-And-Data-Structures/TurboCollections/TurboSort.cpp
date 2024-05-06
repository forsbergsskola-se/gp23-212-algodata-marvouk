#include "TurboSort.h"

    std::vector<int> TurboCollections::TurboSort::TurboList()
    {
        std::vector<int> lists{ 5, 3, 1, 2, 4};
        int n = lists.size();

        for(int i = 0; i < n-2; i++)
        {
            int min = i;
            for(int j = i + 1; j < n - 1; j++)
            {
                if (lists[j] < lists[min])
                {
                   min = j;
                }
            }
            if (min != i)
            {
                std::swap(lists[min], lists[i]);
            }
        }
        return lists;
    }


