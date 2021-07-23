#ifndef __MERGESORT_H__
#define __MERGESORT_H__

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "helper.h"

void mergeSort(std::vector<int>&);

class Merge{
private:
     std::vector<int>& list;
     std::vector<int> auxList;
public:
    void merge(std::vector<int>& list, int lo, int mid, int hi);
    Merge(std::vector<int>& vec)
    :list(vec),auxList(vec){
    }
    int getLength(){
        return (int) list.size();
    }
    void sortTB(int lo, int high);
    void printResult(){
        std::cout << list << std::endl;
    }
};

inline void
Merge::merge(std::vector<int>& list, int lo, int mid, int hi){
    int i = lo;
    int j = mid + 1;
//    int k = lo;
    for (auto l = lo; l <= hi; ++l) {
        auxList[l] = list[l];
    }
    for (int k = lo; k <= hi; ++k){
        if (i > mid){
            list[k] = auxList[j++];
        } else if (j > hi) {
            list[k] = auxList[i++];
        } else if (auxList[i] < auxList[j]) {
            list[k] = auxList[i++];
        } else {
             list[k] = auxList[j++];
        }       
     }
}

inline void
Merge::sortTB(int lo, int hi){
    if (lo >= hi) {
        return;
    }
    int mid = lo + (hi-lo) / 2;
//    std::cout << mid <<" ";
    sortTB(lo, mid);
    sortTB(mid+1, hi);
    merge(list, lo, mid, hi);

}
#endif /*__MERGESORT_H__*/
