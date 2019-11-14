#include <stdio.h>
struct Point
{
    int a;
    int b;
};

int main(void){
    struct Point p1 = {10,20};
    struct Point p2 = p1;
    printf("p2.a = %d, p2.b = %d", p2.a, p2.b);
    getchar();
    return 0;
}
