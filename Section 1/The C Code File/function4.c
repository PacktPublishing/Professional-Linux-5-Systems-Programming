#include <stdio.h>

int main(void)
{
    int x = 2;
    switch(x)
    {
        case 1: printf("This is our choice 1");
                break;
        case 2: printf("This is our choice 2");
                break;
        case 3: printf("This is our choice 3");
                break;
        default: printf("Choice other than 1, 2 and 3");
                break;
    }
    return 0;
}
