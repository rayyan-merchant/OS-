#include<iostream>
#include<unistd.h>
#include<sys/types.h>
using namespace std;

void printUserID(){
    uid_t uid = getuid();
    cout << "User ID (UID): " << uid << endl;
}

int main(){
    pid_t pid = getpid();
    cout << "Current Process ID (PID): " << pid << endl;

    pid_t ppid = getppid();
    cout << "Parent Process ID (PPID): " << ppid << endl;

    printUserID();

    return 0;
}
