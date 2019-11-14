#include <stdio.h>
void fun(int *ptr)
{
    *ptr = 30;
}
int main(void)
{
    int x = 20;
    fun(&x);
    printf("x = %d", x);
    return 0;
}
