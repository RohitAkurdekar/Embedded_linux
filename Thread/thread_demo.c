/*
    Order of thread is not maintained. it is maintained by OS.
*/

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *msg(void *ptr)
{
    printf("\nThis is msg func\nRoutine for thread 1\n");
    sleep(2);
    printf("\nmsg2\n");
}

void *quote_day(void *ptr)
{
    printf("\nThis is quote func\nRoutine for thread 2\n");
}

void main()
{
    pthread_t thread1,thread2;
    printf("\n Before thread \n");
    
    int ret1 = pthread_create(&thread1,NULL,msg,NULL);
    int ret2 = pthread_create(&thread2,NULL,quote_day,NULL);

    // pthread_join(thread1,NULL);
    // pthread_join(thread2,NULL);
    printf("\n--- EoC -----------\n");
    // return 0;
}