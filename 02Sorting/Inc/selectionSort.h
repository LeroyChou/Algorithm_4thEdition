#ifndef __SELECTION_H__
#define __SELECTION_H__

#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include "helper.h"
void selectionSort(std::vector<int>&);

class Selection{
private:
    std::vector<int>& list;
public:
    Selection(std::vector<int>& vec)
    :list(vec){
    }
    void sort();
    void printResult() const {
        std::cout << list << std::endl;
    }
};

inline void
Selection::sort(){
    std::ofstream fileout("../data/selectionProc.txt");
    addLine(fileout, list);
    int len = list.size();
    for(auto i = 0; i < len; ++i){
        int min = i;
        for(int j = i; j < len; ++j){
            if(less(list.at(j), list.at(min))){
                min = j;
            }
        }
        exch(list, i, min);
        addLine(fileout, list);
    }
    fileout.close();
}
#endif /* __SELECTION_H__*/
