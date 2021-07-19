#include "insertionSort.h"
#include <ctime>

using namespace std;

void insertionSort(){
    string dir{"../data/unordered.txt"};
    Insertion IS{dir};
    clock_t startTime, endTime;
    startTime = clock();
    IS.sort();
    endTime = clock();
    float time = (float) (endTime - startTime) * 1000 / (float)CLOCKS_PER_SEC;
    cout << "Time cost: " << time << "ms"<< endl;
    IS.printResult();
}
