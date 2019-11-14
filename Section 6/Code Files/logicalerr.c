#include <stdio.h>
int main()
{
    int i = 0;

    for(i = 0; i < 3; i++);
    {
        printf("this is a logical error");
        continue;
    }
    getchar();
    return 0;
}
