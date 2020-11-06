#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int argc, char const *argv[])
{
    int fd;
    unsigned char rbuff[64];
    mkfifo("desd",S_IRUSR | S_IWUSR);
    fd=open("desd",O_RDONLY);
    read(fd,rbuff,64);
    printf("String is:%s\n",rbuff);
    close(fd);
    return 0;
}
