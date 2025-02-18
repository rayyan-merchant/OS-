#include<iostream>
#include<unistd.h>
#include<sys/wait.h>
using namespace std;

int main(){
    pid_t pid = fork();

    if(pid < 0){
        cerr << "Fork failed!" << endl;
        return 1;
    } 
    else if(pid == 0){
        cout << "Child process: Listing files in the current directory" << endl;
        execlp("ls", "ls", "-l", NULL);
        cerr << "execlp failed!" << endl;
        exit(1);
    } 
    else{
        wait(NULL);
        cout << "Parent process: Child process has terminated." << endl;
    }
    return 0;
}
