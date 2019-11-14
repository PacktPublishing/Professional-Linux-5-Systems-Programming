#include <stdio.h>
#include <unistd.h>
#define MSGSIZE 16

char* msg1 = "Running, pipes #1";
char* msg2 = "Running, pipes #2";
char* msg3 = "Running, pipes #3";

int main()
{
    char inbuf[MSGSIZE];
    int p[2], i;

    if (pipe(p) < 0)
        exit(1);

    write(p[1], msg1, MSGSIZE);
    write(p[1], msg2, MSGSIZE);
    write(p[1], msg3, MSGSIZE);

    for (i = 0; i < 3; i++)
        {
            read(p[0], inbuf, MSGSIZE);
            printf("% s\n", inbuf);
        }
    return 0;
}
