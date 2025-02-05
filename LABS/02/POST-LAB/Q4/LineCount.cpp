#include"LineCount.h"
#include<fstream>
#include<iostream>

using namespace std;

LineCount::LineCount(const string& filename) : filename(filename), lineCount(0) {}

void LineCount::countLines(){
    ifstream file(filename);
    if(!file){
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    string line;
    while(getline(file, line)){
        lineCount++;
    }
}

int LineCount::getLineCount() const{
    return lineCount;
}
