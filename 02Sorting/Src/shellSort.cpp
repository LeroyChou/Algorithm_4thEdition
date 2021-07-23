#include "shellSort.h"
#include <string>
#include <ctime>

using namespace std;

void shellSort(vector<int>& vec){
    cout << "shellSort begin." << endl; 
    Shell sl(vec);
    clock_t start, end;
    start = clock();
    sl.sort();
    end = clock();
    float time = (float)(end - start) * 1000 /(float) CLOCKS_PER_SEC;
    cout << "Time cost: " << time << "ms" << endl;
    sl.printResult();
}
