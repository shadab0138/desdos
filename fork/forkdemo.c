#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(){
    pid_t id;
    pid_t ppid;
    printf("Before Fork=id:%d pid:%d\n",id,ppid);
    id=fork();
    if(id==0){
         printf("Child Fork=id:%d pid:%d ppid:%d\n",id,getpid(),getppid());
    }
    else{
         printf("Parent Fork=id:%d pid:%d ppid:%d\n",id,getpid(),getppid()); 
    }
        return 0;
    
}