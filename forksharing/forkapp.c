#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(){
    pid_t id;
    pid_t ppid;
    printf("Before Fork=id:%d pid:%d\n",id,ppid);
    id=fork();
    if(id==0){
         printf("child=pid:%d ppid:%d",getpid(),getppid());
    }
     else{
          printf("parent=pid:%d ppid:%d",getpid(),getppid());
     }
        return 0;
    
}