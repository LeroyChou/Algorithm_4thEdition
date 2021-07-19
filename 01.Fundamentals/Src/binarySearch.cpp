#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

ostream& operator << (ostream& os, vector<int> vec);

int binarySearch(int dataToFind){
    string dir{"../data/orderedData.txt"};
    ifstream filein(dir);  //读入有序数据
    string line, word;
    int data;
    vector<int> list;
    while(getline(filein, line)){
        stringstream linestream(line);
        while (linestream >> word) {
            data = stoi(word);
            list.emplace_back(data);
        }
    }
    cout << list << endl;
    int low = 0;
    int high = list.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if (dataToFind == list.at(mid)){
            return mid;
        } else if (dataToFind < list.at(mid)){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

inline ostream&
operator << (ostream& os, vector<int> vec){
    for(auto i : vec){
        cout << i << "\n";
    }
    cout << "\n";
    return os;
}
