#ifndef __HELPER_H__
#define __HELPER_H__

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>

/*重定义<<操作*/
std::ostream&
operator << (std::ostream& os, const std::vector<int>& vec);

/*比较两个数的大小*/
inline
bool less(int& a, int& b){
    return a < b;
}

/*交换容器中的两个数*/
inline
void exch(int*& list, int index1, int index2){
    int tmp = list[index1];
    list[index1] = list[index2];
    list[index2] = list[index1];
}

inline
void exch(std::vector<int>& list, int idx1, int idx2){
    int tmp = list.at(idx1);
    list.at(idx1) = list.at(idx2);
    list.at(idx2) = tmp;
}

inline
void exch(std::vector<int>&, std:: vector<int>::iterator& it1, std::vector<int>::iterator& it2){
    int tmp = *it1;
    *it1 = *it2;
    *it2 = tmp;
}


inline
void exch(std::vector<int>&, std:: vector<int>::iterator it1, std::vector<int>::iterator it2){
    int tmp = *it1;
    *it1 = *it2;
    *it2 = tmp;
}

/*从命名文件中读取数据*/
std::vector<int> read(const std::string&);

/*将数据写入文件的一行*/
void addLine(std::ofstream&, std::vector<int>& list);

#endif /*__HELPER_H__*/

