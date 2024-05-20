#pragma once
#include <vector>

namespace TurboCollections
{
    
template <typename T>
class TurboSearch
{
    TurboSearch () = delete;
public:
    static int linear_search (std::vector<T>& list,int value)
    {
        for(T item : list)
        {
            if(item == value) return item;
        }
        return 0;
    }

};
}
