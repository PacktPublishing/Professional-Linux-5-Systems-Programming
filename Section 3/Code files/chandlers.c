#include <stdio.h>
#include <signal.h>

void handlers(int signals)
{
    printf("Handling with signals %d\n", signals);
}

int main(void)
{
    int i = 0;
    signal(SIGTERM, handlers);

    while(1)
    {
        printf("i = %d\n", i);
        i++;
        sleep(1);
    }
    return(0);
}

