#include <stdio.h>
int main(){
    int pid = fork();
    if(pid == -1){
        printf("Child process could not be started\n");
    }else if(pid == 0){
        printf("Child process started with id :%d\n",getpid());
        printf("Parent porcess id : %d\n",getppid());
        printf("Child is going to sleep\n");
        sleep(5);
        printf("Child is back\n");
        printf("Child process id :%d\n",getpid());
        printf("Parent process id :%d\n",getppid());
    }else{
        printf("Parent is going to sleep\n");
        sleep(10);
        printf("Parent is back\n");
        printf("Parent process id %d\n",getpid());
    }
}