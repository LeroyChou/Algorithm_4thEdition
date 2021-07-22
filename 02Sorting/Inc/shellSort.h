#ifndef __SHELLSORT_H__ 
#define __SHELLSORT_H__ 
#define PROCESS true

#include "helper.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


void shellSort();

class Shell{
private:
    std::vector<int> list;
public:
    Shell(std::string dir)
    :list(read(dir)){
    }

    void sort();
    void printResult(){
        std::cout << list << std::endl;
    }
};

inline void
Shell::sort(){
#if PROCESS
    std::ofstream fileout("../data/shellProc.txt");
    addLine(fileout, list);
#endif /*PROCESS*/
    std::string word, line;
    int N = list.size();
    int h = 1;
    while(h < N / 3){
        h = 3 * h + 1;
    }
    while(h >= 1){
        for(auto i = h; i < N; ++i){
            for(auto j = i; j >=h && less(list.at(j),list.at(j-h)); j -= h){
                exch(list, j, j-h);
#if PROCESS
                addLine(fileout, list);
#endif /*PROCESS*/

            }
        }
        h /= 3;
    }

#if PROCESS
    fileout.close();
#endif /*PROCESS*/
}

#endif /*__SHELLSORT_H__*/ 
