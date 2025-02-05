#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){
    vector<int> numbers;

    if(argc > 1){
        for (int i = 1; i < argc; i++) {
            numbers.push_back(atoi(argv[i]));
        }
    } 
	else{  
        int n, num;
        cout << "Enter the number of integers: ";
        cin >> n;

        cout << "Enter " << n << " integers: ";
        for(int i = 0; i < n; i++){
            cin >> num;
            numbers.push_back(num);
        }
    }

    sort(numbers.begin(), numbers.end());

    cout << "Sorted numbers: ";
    for (int num : numbers){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
