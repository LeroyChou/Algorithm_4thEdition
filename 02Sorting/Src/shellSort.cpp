#include "shellSort.h"
#include <string>
#include <ctime>

using namespace std;

void shellSort(){
    string s{"../data/unordered.txt"}; 
    Shell sl{s};
    clock_t start, end;
    start = clock();
    sl.sort();
    end = clock();
    float time = (float)(end - start) * 1000 /(float) CLOCKS_PER_SEC;
    cout << "Time cost: " << time << "ms" << endl;
    sl.printResult();
}
