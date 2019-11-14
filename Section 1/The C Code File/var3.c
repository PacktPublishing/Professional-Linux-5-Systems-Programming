#include <stdio.h>

int main(void){
    static int i = 50;
    printf("The value of i = %d", i);
    getchar();
    return 0;
}
