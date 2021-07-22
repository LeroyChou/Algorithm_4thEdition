#include "selectionSort.h"
#include <ctime>

using namespace std;
void selectionSort(){
    string s("../data/unordered.txt");
    Selection SS(s);
    clock_t start, end;
    start = clock();
    SS.sort();
    end = clock();
    float time = (float) (end - start)*1000/ (float)CLOCKS_PER_SEC;
    cout << "Time cost: " << time << "ms" << endl;
    SS.printResult();
}
