#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream inputFile("input.txt", ios::in);   
    ofstream outputFile("output.txt", ios::out);

    if(!inputFile){
        cerr << "Error: Unable to open input file!" << endl;
        return 1;
    }

    if(!outputFile){
        cerr << "Error: Unable to open output file!" << endl;
        inputFile.close();  
        return 1;
    }

    char buffer[1024]; 
    while(inputFile.read(buffer, sizeof(buffer))){
        outputFile.write(buffer, inputFile.gcount());
    }
    outputFile.write(buffer, inputFile.gcount());

    inputFile.close();
    outputFile.close();
    cout << "File copied successfully!" << endl;
    return 0;
}
