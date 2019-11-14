#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(void)
{
    struct stat sb;

    stat("foo", &sb);

    printf("accessed: %s", ctime(&sb.st_atime));
    printf("last modified: %s", ctime(&sb.st_mtime));
    printf("changed: %s", ctime(&sb.st_ctime));
}
