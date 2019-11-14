#include <stdio.h>
#include <sys/types.h>

int main()
{
    fork();
    fork();
    fork();

    printf("running fork\n");
    return 0;
}
