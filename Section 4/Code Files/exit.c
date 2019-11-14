#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();

    if (pid == 0)
    {
        exit(9999);
    }

    int status;
    waitpid(pid, &status, 0);
    if (WIFEXITED(status))
    {
        int exit_status = WEXITSTATUS(status);
        printf("Exit Code: %d\n", exit_status);
    }
    return 0;
}
