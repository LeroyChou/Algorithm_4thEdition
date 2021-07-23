#include "insertionSort.h"
#include <ctime>

using namespace std;

void insertionSort(vector<int>& vec){
    cout << "insertionSort begin." << endl; 
    Insertion IS(vec);
    clock_t startTime, endTime;
    startTime = clock();
    IS.sort();
    endTime = clock();
    float time = (float) (endTime - startTime) * 1000 / (float)CLOCKS_PER_SEC;
    cout << "Time cost: " << time << "ms"<< endl;
    IS.printResult();
}
