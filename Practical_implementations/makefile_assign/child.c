#include"child.h"

void myFork()
{
    // runPython();
    pid_t ret;
    ret=fork();
    if(ret==0)
    {
        printf("\nparent process created\n");
    }
    else if(ret>0)
    {
        cpCreation();
    }
    else
    {
        printf("error");
    }
    // return 0;
}