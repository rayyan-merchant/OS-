#include<iostream>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
using namespace std;

int main(){
    pid_t child1, child2;

    child1 = fork();
    if(child1 < 0){
        perror("Fork failed for child1");
        exit(1);
    }
    else if(child1 == 0){
        cout << "Child 1: My PID is " << getpid() << endl;
        exit(0);
    }

    waitpid(child1, NULL, 0);

    child2 = fork();
    if(child2 < 0){
        perror("Fork failed for child2");
        exit(1);
    }
    else if(child2 == 0){
        cout << "Child 2: My parent PID is " << getppid() << endl;
        exit(0);
    }

    waitpid(child2, NULL, 0);
    cout << "Parent: Both child processes have terminated." << endl;
    return 0;
}
