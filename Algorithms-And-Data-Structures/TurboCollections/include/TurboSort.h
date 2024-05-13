#pragma once
#include <vector>


namespace TurboCollections
{
 static class TurboSort
  {
    TurboSort () = delete;
   public:
     
    static void  TurboList(std::vector<int>& list);
    static void BubbleSort(std::vector<int>& bubbleList);
     static void QuickSort(std::vector<int>& quickSort);
  };
     
}

