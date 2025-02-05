#include"LetterCount.h"
#include<fstream>
#include<cctype>
#include<iostream>

using namespace std;

LetterCount::LetterCount(const string& filename) : filename(filename), letterCount(0) {}

void LetterCount::countLetters(){
    ifstream file(filename);
    if(!file){
        cerr << "Error opening file: " << filename << endl;
        return;
    }
    
    char ch;
    while(file.get(ch)){
        if(isalpha(ch)){
            letterCount++;
        }
    }
}

int LetterCount::getLetterCount() const{
    return letterCount;
}
