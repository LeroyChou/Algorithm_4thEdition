#ifndef __INSERTIONSORT_H__
#define __INSERTIONSORT_H__

#include <iostream>
#include <sstream>
#include <fstream>
#include "helper.h"

void insertionSort(std::vector<int>&);

class Insertion{
private:
    std::vector<int>& list;
   // std::vector<int>::iterator it;
public:
    Insertion(std::vector<int>& vec)
    :list(vec){
    }
    void sort();
    void printResult(){
        std::cout << list << std::endl;
    }
};

inline void
Insertion::sort(){
    std::ofstream fileout("../data/insertionProc.txt");
    addLine(fileout, list);
    for (auto ite = list.begin() + 1; ite != list.end(); ++ite){
        for (auto ite2 = ite; ite2 != list.begin() && less(*ite2, *(ite2-1)); --ite2){
                exch(list, ite2, (ite2-1));
                addLine(fileout, list);
        }
    }    
    fileout.close();
}

#endif /* __INSERTIONSORT_H_*/
