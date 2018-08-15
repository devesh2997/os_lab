#include <stdio.h>
#include <string.h>
#include<unistd.h>
int main(){
    char name[100];
    scanf("%s",name);
    int n = strlen(name);
    int i;
    for(i=0;i<n;i++){
        sleep(i);
        printf("%c",name[i]);
        fflush(stdout);
    }
    printf("\n");
}