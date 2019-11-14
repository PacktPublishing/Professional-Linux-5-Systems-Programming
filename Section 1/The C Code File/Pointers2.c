#include <stdio.h>

int main(void)
{
    int var = 10;
    int *ptr = &var;
    printf("The value of var = %d\n", *ptr);
    printf("Address of var is = %p\n", ptr);
    *ptr = 20;

    printf("After doing *ptr = 20, *ptr is %d\n", *ptr);
    return 0;
}
