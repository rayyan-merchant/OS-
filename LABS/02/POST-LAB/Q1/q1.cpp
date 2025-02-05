#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
    if(argc < 2){
        cerr << "Error: Please provide atleast one integer." << endl;
        return 1;
    }

    vector<int> numbers;
    int sum = 0;

    for(int i = 1; i < argc; i++){
        string arg = argv[i];
        
        for(char c : arg){
            if(!isdigit(c) && c != '-'){
                cerr << "Error: '" << arg << "' is not a valid integer." << endl;
                return 1;
            }
        }

        int num = stoi(arg); 
        numbers.push_back(num);
        sum += num;
    }

    double average = (double)sum / numbers.size();

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
}
