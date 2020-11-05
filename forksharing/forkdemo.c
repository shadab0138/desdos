#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int count=0;
int main(){
    pid_t id;
    pid_t ppid;
    id=fork();
    
    if(id==0){
         count--;
         printf("Count in child=%d\n",count);
       }
    else{
         count+=2;
         printf("Parent count=%d",count); 
    }
        return 0;
    
}