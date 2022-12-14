#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

long long int final_value=0;

int main()
{
    pid_t pid;
    int count1,count2;
    pid = fork();

    if(pid==0)
    {
        for (count1 = 0; count1 <= 100; count1++)
        {
            final_value = final_value - 1;
            printf("final_val via parent: %lld \t",final_value);
        }
    }
    else if(pid>0)
    {
        wait(NULL);
        for (count2 = 0; count2 <= 50; count2++)
        {
            final_value = final_value + 1;
            printf("final_val via child: %lld \t",final_value);
        }
        
    }
    else
    {
        perror("Errrooorrrr");
    }

    printf("\nglobal: %lld\n",final_value);
    return 0;
}