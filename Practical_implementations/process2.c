#include<time.h>
#include<stdio.h>
#include<unistd.h>

void vAdd(int iNum1,int iNum2)
{
    printf("\nAdd: %d\n",(iNum1+iNum2));
}

void vMul(int iNum1,int iNum2)
{
    printf("\nMul: %d\n",(iNum1*iNum2));
}

int main()
{
	// Calculate the time taken by fun()
    pid_t ret;
    printf("\nWith fork()\n");
	clock_t t;
	t = clock();
    ret = fork();
    if(ret>0)
    {
        for (int i = 0; i < 50000; i++)
        {
            vAdd(15,10);
            // vMul(10,2);
        }
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

        printf("\n parent() took %f seconds to execute \n", time_taken);
    }
    else if(ret==0)
    {
        for (int i = 0; i < 50000; i++)
        {
            // vAdd(15,10);
            vMul(10,2);
        }
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

        printf("\nchild() took %f seconds to execute \n", time_taken);
    }
    else
    {
        printf("error");
    }
	// t = clock() - t;
	// double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

	// printf("\nfun() took %f seconds to execute \n", time_taken);

    return 0;
}
