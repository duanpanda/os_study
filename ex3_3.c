#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int value = 5;

int main()
{
    pid_t pid;

    pid = fork();

    if (pid == 0) {             /* child process */
        value += 5;
    }
    else if (pid > 0) {         /* parent process */
        wait(NULL);
        printf("PARENT: value = %d\n", value); /* LINE A */
        exit(0);
    }
}
