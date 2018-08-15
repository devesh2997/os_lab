#include <stdio.h>
#include <sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    int pid = fork();
    if(pid == -1){
        printf("Child process could not be started\n");
    }else if(pid == 0){
        printf("Child process started with id :%d\n",getpid());
        printf("Parent porcess id : %d\n",getppid());
        printf("Child is going to sleep\n");
        sleep(2);
    }else{
        printf("Parent wait started\n");
        wait(NULL);
        printf("Parent wait ended\n");
    }
}
