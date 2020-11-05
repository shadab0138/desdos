#include <stdio.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    pid_t id;
    int pfd[2];
    pipe(pfd);
    id=fork();
    unsigned char rbuff[128];
    if(id==0){
        read(pfd[0],rbuff,128);
        printf("child process :%s",rbuff);
        close (pfd[0]);
            }
        else{
            write(pfd[1],"cdac\n",5);
            close(pfd[1]);
        }        
            
    return 0;
}
