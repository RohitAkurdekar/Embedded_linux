#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>


int main()
{
    pid_t fork_ret_val;
    pid_t pid;
    fork_ret_val = fork();

    if (fork_ret_val == 0)
    {
        printf("\nchild process pid in child: %d\n",getpid());
        printf("\nparent process ppid in child: %d\n",getppid());
    }
    else if(fork_ret_val>0)
    {
        sleep(3);
        printf("\nfork ret val in parent: %d\n",fork_ret_val);
        printf("\nchild process pid in parent: %d\n",getpid());
        printf("\nparent process ppid in parent: %d\n",getppid());

    }
    else
    {
        perror("Errrrrrrrrrrooooooooooorrrrrrrrrrrrrrrrr");
        exit(0);
    }
    return 0;
}

/*

fork ret val in parent: 67032

child process pid in parent: 67031

parent process ppid in parent: 65689

child process pid in child: 67032

parent process ppid in child: 67031


--------------------------------------------------------


child process pid in child: 67081

parent process ppid in child: 67080

fork ret val in parent: 67081

child process pid in parent: 67080

parent process ppid in parent: 65689
*/