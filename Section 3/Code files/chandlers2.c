#include <stdio.h>
#include <signal.h>
#include <sys/wait.h>
#include <stdlib.h>

int a;

void handler(int signum)
{
    printf("signal %d received - counter reset\n", signum);
    a = 0;
}
main()
{
    signal(SIGINT, handler);
    signal(SIGQUIT, SIG_IGN);
    signal(SIGTERM, SIG_IGN);

    while(1)
    {
        printf("Handling %d\n", a++);
        sleep(1);
    }
}
