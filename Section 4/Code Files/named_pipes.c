#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <assert.h>

#define PIPE_NAME "./named_pipes"

int main() {
    int res, fifo, pid;
    char *str = "Greetings, Humans!\n";

    fprintf(stderr, "Forking process\n");
    pid = fork();
    assert(pid >= 0);

    if (pid == 0) {
        printf("Here is the shell script\n");
        system("./named_pipes.sh");
    }
    else {

        fprintf(stderr, "Creating PIPE\n");
        remove(PIPE_NAME);
        res = mkfifo(PIPE_NAME, 0777);
        assert(res == 0);


        fprintf(stderr, "Opening PIPE\n");
        fifo = open(PIPE_NAME, O_WRONLY);
        assert(fifo != 0);


        printf("Writing to PIPE\n");
        res = write(fifo, str, strlen(str));
        assert(res > 0);
        close(fifo);
    }
}
