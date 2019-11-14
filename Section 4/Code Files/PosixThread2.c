#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
int x = 0;

void *mythreading(void *vargp)
{
    int *mythread = (int *)vargp;
    static int s = 0;
    ++s; ++x;

    printf("Our Thread ID is: %d, static: %d, Global: %d\n", *mythread, ++s, ++x);
}
int main()
{
    int i;
    pthread_t tid;

    for (i = 0; i < 3; i++)
        pthread_create(&tid, NULL, mythreading, (void *)&tid);
    pthread_exit(NULL);
    return 0;
}
