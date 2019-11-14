#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>

main()
{
  int status;
  int a, b, c;

  if (fork())
  {
    wait (&status);
    if (WIFEXITED(status))
      printf("Child exited normally with exit status %d\n", WEXITSTATUS(status));
    if (WIFSIGNALED(status))
      printf("Child exited on signal %d: %s\n", WTERMSIG(status), strsignal(WTERMSIG(status)));
  }
  else
  {
    printf("Child PID = %d\n", getpid());
    pause();
    exit(5);
  }
}
