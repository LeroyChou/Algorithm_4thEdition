#include <iostream>
#include "binarySearch.h"

using namespace std;

int main(int argc, char** argv){
    string s{argv[1]};
    int data = stoi(s);
    cout << binarySearch(data) << endl;
    return 0;
}
