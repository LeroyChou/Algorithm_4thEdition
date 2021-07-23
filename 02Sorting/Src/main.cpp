#include "selectionSort.h"
#include "insertionSort.h"
#include "shellSort.h"
#include "mergeSort.h"

using namespace std;

int main(){
    string s{"../data/unordered.txt"};
    vector<int> vec=read(s);
//    vector<double> y{2, 2, 3,5, 6};
//    selectionSort(vec);
//    insertionSort(vec);
//    shellSort(vec);
    mergeSort(vec);
    cout << vec << endl;
    return 0;
}
