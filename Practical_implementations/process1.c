#include<time.h>
#include<stdio.h>

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
    printf("\nWithout fork()\n");
	// Calculate the time taken by fun()
	clock_t t;
	t = clock();
    for (int i = 0; i < 100000; i++)
    {
        vAdd(15,10);
        vMul(10,2);
    }
    
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

	printf("\nfun() took %f seconds to execute \n", time_taken);

    return 0;
}
