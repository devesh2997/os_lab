#include <stdio.h>

int main(){
    int cid = fork();
    if(cid==0){
        printf("Child process created with id : %d\n",getpid());
        printf("Process id of parent process : %d\n",getppid());
    }

}