#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
void *mythreading(void *vargp)
{
    sleep(1);
    printf("Posix Thread\n");
    return NULL;
}
int main()
{
    pthread_t thread_id;
    printf("This Before Threading\n");
    pthread_create(&thread_id, NULL, mythreading, NULL);
    pthread_join(thread_id, NULL);
    printf("This is After Threading\n");
    exit(0);
}
