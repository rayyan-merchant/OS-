#include<iostream>
#include<unistd.h>
#include<signal.h>
using namespace std;

void handleAlarm(int){
    cout << "Alarm received, program terminating." << endl;
    exit(0);
}

int main(){
    signal(SIGALRM, handleAlarm);  
    alarm(5); 

    cout << "Alarm set, entering sleep loop..." << endl;

    for(int i = 1; ; i++){ 
        cout << "Sleeping... " << i << " seconds elapsed" << endl;
        sleep(1);
    }
    return 0;
}
