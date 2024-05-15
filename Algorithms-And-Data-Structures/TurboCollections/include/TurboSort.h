#pragma once
#include <vector>
namespace TurboCollections
{
 class TurboSort
  {
    TurboSort () = delete;
   public:
     
    static void  TurboList(std::vector<int>& list);
    static void BubbleSort(std::vector<int>& bubbleList);
    static void QuickSort(std::vector<int>& list, int low, int high);
     static int partition(std::vector<int>&list,int low,int high);
  };
     
}

