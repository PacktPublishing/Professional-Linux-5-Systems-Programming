#include <stdio.h>
int main(void)
{
    int x = 2;
    switch (x)
    {
        case 1: printf("our choice is 1\n");
        case 2: printf("our choice is 2\n");
        case 3: printf("our choice is 3\n");
        default: printf("choice other than 1, 2 and 3\n");
    }
    return 0;
}
