#include <stdio.h>
#include <sys/stat.h>

void main()
{
    umask(0);
    creat("f1", 0755);

    umask(007);
    creat("f2", 0755);
    creat("f3", 0);
    chmod("f3", S_IRUSR | S_IWUSR);

    system("ls -l f?");
}
