#include <stdio.h>

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main(void)
{
    int a = 10, b = 20;
    int m = max(a, b);
    printf("m is %d", m);
    return 0;
}
