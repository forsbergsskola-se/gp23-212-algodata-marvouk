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
        for (int i = 0; i < list.size(); i++)
        {
            if(list[i] == value)
            {
                return i;
            }
        }
        return -1;
    }

};
}
