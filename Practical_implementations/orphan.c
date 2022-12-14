#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{

    pid_t child_pid=fork();
    if(child_pid>0)
    {
        exit(0);
    }
    else
    {
        sleep(50);
    }
    return 0;


}