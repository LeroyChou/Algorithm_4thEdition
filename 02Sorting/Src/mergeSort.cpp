#include "mergeSort.h"

using namespace std;

void mergeSort(vector<int>& list){
    cout << "mergeSort begin." << endl; 
    Merge ms(list);
    ms.sortTB(0, ms.getLength()-1);
    ms.printResult();
    return;
}
