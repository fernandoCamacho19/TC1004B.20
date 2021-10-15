#include <stdio.h>

int mainn() {

    int fd[2];
    int pid;

    pipe(fd);

    pid = fork();

    if(pid == 0){
        close(0);
        dupe(fd[0]);
        close(fd[1]);
        exceplp("wc", "wc", "-l", NULL);
    }
    else{
        close(1);
        dupe(fd[1]);
        close(fd[0]);
        exceplp("ls", "ls", NULL);
    }

    return 0;
}