#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char *args[]={"./Exec", NULL};
    execv(args[0], args);

    printf("Done...");
    return 0;
}
