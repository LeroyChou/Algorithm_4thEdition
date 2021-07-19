#include "helper.h"
#include <iostream>

using namespace std;

/*操作符<<重载*/
ostream& operator << (ostream& os, const vector<int>& vec){
    for (auto i : vec){
        os << i << " ";
    }
    return os;
}

/*从文件中读取数据*/
vector<int> read(const string& dir){
    vector<int> list;
    fstream filein{dir};
    string line, word;
    stringstream linestream;
    int data;
    while(getline(filein, line)){
        linestream.str(line);
        while(linestream >> word){
            data = stoi(word);
            list.emplace_back(data);
        }
        linestream.str(string());
        linestream.clear();
    }
    cout << "Read from " << dir <<", done!\n" <<"Size of list: " << list.size() << endl; 
    return list;
}

/*将数据写入文件的一行*/
void addLine(ofstream& file, vector<int>& list){
    stringstream linestream;
    for (auto i : list){
        linestream << to_string(i) << " ";
    }
    file << linestream.str() << "\n";
    linestream.str(string());
    linestream.clear();
}
