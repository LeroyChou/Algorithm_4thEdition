#include "mergeSort.h"

using namespace std;

void mergeSort(){
    string s("../data/unordered.txt");
    Merge ms(s);
    ms.sortTB(0, ms.getLength()-1);
    ms.printResult();
}
