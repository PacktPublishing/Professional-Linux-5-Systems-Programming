#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void forkprocess()
{
    if(fork() == 0)
        printf("This is the fork process child\n");
    else
        printf("This is from the parent!\n");
}

int main()
{
    forkprocess();
    return 0;
}
