#include<iostream>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
using namespace std;

int main(){
    pid_t pid = fork();

    if(pid < 0){
        cerr << "Fork failed!" << endl;
        return 1;
    } 
    else if(pid == 0){
        cout << "Child Process: Listing files in the current directory..." << endl;
        execlp("ls", "ls", "-l", NULL);
        cerr << "execlp failed!" << endl;
        exit(1);
    } 
    else{
        wait(NULL);
        cout << "Parent Process: Child process has terminated." << endl;
    }s
    return 0;
}
