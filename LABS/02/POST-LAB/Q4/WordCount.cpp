#include"WordCount.h"
#include<fstream>
#include<sstream>
#include<iostream>

using namespace std;

WordCount::WordCount(const string& filename) : filename(filename), wordCount(0){}

void WordCount::countWords(){
    ifstream file(filename);
    if(!file){
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    string word;
    while (file >> word){
        wordCount++;
    }
}

int WordCount::getWordCount() const{
    return wordCount;
}
