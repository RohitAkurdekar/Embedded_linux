#include<stdio.h>
#include<my_basic.h>

// int add1(int num1,int num2)
// {
//     int sum = num1+num2;
// }

int main()
{
    int num1=10,num2=15;
    //printf("\n%d\n",add1(num1,num2));

    printf("\n----------New ---------------\n");
    
    printf("add: %d\n",add(15,10));
    printf("sub: %d\n",sub(15,10));
    printf("mul: %d\n",mul(15,10));
    printf("div: %d\n",div(15,10));
    return 0;
}