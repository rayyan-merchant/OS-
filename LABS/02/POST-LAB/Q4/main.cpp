#include<iostream>
#include"LetterCount.h"
#include"WordCount.h"
#include"LineCount.h"

using namespace std;

int main(){
    string filename = "q4.txt"; 
    
    LetterCount letterCountObj(filename);
    WordCount wordCountObj(filename);
    LineCount lineCountObj(filename);
    
    letterCountObj.countLetters();
    wordCountObj.countWords();
    lineCountObj.countLines();
    
    cout << "Letter Count: " << letterCountObj.getLetterCount() << endl;
    cout << "Word Count: " << wordCountObj.getWordCount() << endl;
    cout << "Line Count: " << lineCountObj.getLineCount() << endl;

    return 0;
}
