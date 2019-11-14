#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void handler(int num)
{
    write(STDOUT_FILENO, "Keep sending signals and pid!\n", 13);
}

int main(void)
{
    signal(SIGINT, handler);
    while (1)
    {
        printf("Sending you this signals with the pid %d\n", getpid());
        sleep(1);
    }
}
