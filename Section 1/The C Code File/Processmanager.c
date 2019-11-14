#include <stdio.h>
//The Parent Process
void Syst();
int main(void)
{
    Syst("\bin\date","date");
    printf("now you are with parent process\n");
    return 0;
}
    void Syst(s1,s2)
    char *s1,*s2;
{
    int fd,x;
    fd =fork();
    if (fd ==0)
{
    printf("now you are with current processs\n");
    x=execl(s1,s2,0);
    if(x==-1)
{
    perror(s1);
}

}
    wait();
}
