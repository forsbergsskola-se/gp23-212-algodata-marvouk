#pragma once
#include <vector>

namespace TurboCollections
{
    template <typename T>
    class BinarySearch
    {
        BinarySearch() = delete;
    public:
        static int binary_search(std::vector<T>&a,int x)
        {
            
            T n = a.size();
            
            int lowerBound = 0;
            int upperBound = n - 1;

            while(x != NULL)
            {
                if(upperBound < lowerBound)
                {
                    return -1 ;
                }
                int midPoint = (lowerBound + upperBound)/2;
         
                if(a[midPoint] < x)
                {
                    lowerBound = midPoint +1;
                }else if(a[midPoint] > x)
                {
                    upperBound = midPoint - 1;
                }else if(a[midPoint] == x)
                {
                    return midPoint;
                }         
            }
        }
    };
}
    
