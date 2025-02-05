#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int findMissingElement(const vector<int>& arr){
    for(size_t i = 1; i < arr.size(); i++) {
        if(arr[i] != arr[i - 1] + 1){
            return arr[i - 1] + 1; 
        }
    }
    return -1; 
}

int main(){
    ifstream inputFile("series.txt");
    if(!inputFile){
        cerr << "Error: Could not open the file!" << endl;
        return 1;
    }

    vector<int> numbers;
    int num;

    while(inputFile >> num){
        numbers.push_back(num);
    }

    inputFile.close();

    sort(numbers.begin(), numbers.end());

    int missing = findMissingElement(numbers);

    if(missing == -1){
        cout << "No missing element found." << endl;
    }
	else{
        cout << "Missing element: " << missing << endl;

        ofstream outputFile("missing.txt");
        if(outputFile.is_open()){
            outputFile << "Missing element: " << missing << endl;
            outputFile.close();
            cout << "Content written to 'missing.txt'." << endl;
        }
		else{
            cerr << "Error: Could not open the output file for writing." << endl;
            return 1;
        }
    }
}
