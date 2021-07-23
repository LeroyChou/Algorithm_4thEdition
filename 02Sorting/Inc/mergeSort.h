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
     void merge(int lo, int mid, int hi);
public:
    Merge(std::vector<int>& vec)
    :list(vec),auxList(vec){
    }
    int getLength(){
        return (int) list.size();
    }
    void sortTD(int lo, int high);  //自顶而下归并
    void sortBU();  //自底而上归并
    void printResult(){
        std::cout << list << std::endl;
    }
};

inline void
Merge::merge(int lo, int mid, int hi){
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
Merge::sortTD(int lo, int hi){
    if (lo >= hi) {
        return;
    }
    int mid = lo + (hi-lo) / 2;
//    std::cout << mid <<" ";
    sortTD(lo, mid);
    sortTD(mid+1, hi);
    merge(lo, mid, hi);

}

inline void
Merge::sortBU(){
    int N = list.size();
    for(int sz=1; sz <= N; sz*=2){
        for(int lo=0; lo <= N-1-sz; lo+=2*sz){
            merge(lo, lo+sz-1, min(lo+2*sz-1, N-1));
        }
    }
}
#endif /*__MERGESORT_H__*/
