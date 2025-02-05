#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

int missingEle(const vector<int>& arr){
    for(size_t i = 1; i < arr.size(); ++i){
        if(arr[i] != arr[i - 1] + 1){
            return arr[i - 1] + 1; 
        }
    }
    return -1;  
}

int main(int argc, char* argv[]){
    if(argc < 2){
        cerr << "Please enter integers as command-line arguments." << endl;
        return 1;
    }

    vector<int> arr;

    for(int i = 1; i < argc; i++){
        try{
            arr.push_back(stoi(argv[i]));
        } 
		catch (...){
            cerr << "Invalid input: '" << argv[i] << "' is not a valid integer." << endl;
            return 1;
        }
    }

    sort(arr.begin(), arr.end());

    int miss = missingEle(arr);

    if(miss == -1){
        cout << "No missing element found." << endl;
    } 
	else{
        cout << "Missing elements: " << miss << endl;

        ofstream outputFile("missing.txt");
        if(outputFile.is_open()){
            outputFile << miss;
            outputFile.close();
            cout << "Content written to 'missing.txt'." << endl;
        } 
		else{
            cerr << "Error: Could not open file for writing." << endl;
            return 1;
        }
    }

    return 0;
}
