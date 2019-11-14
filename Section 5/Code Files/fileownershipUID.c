#include <stdio.h>
#include <unistd.h>

int main()
{
    int change = getuid();
    int changeuid = getuid();

    printf("This is the UID : %d\n", change);
    printf("The next UID : %d\n", changeuid);
}
