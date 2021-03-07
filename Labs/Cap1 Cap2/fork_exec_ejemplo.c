#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    printf("--Beginning of program\n");

    int counter = 0;
    pid_t pid = fork();
	
    if (pid == 0)
    {
        // child process
        
	printf("child process id: %d, se hace correr valor_variable_entorno_arg.c con execl\n", getpid());
        execl("/home/gustavo/lp3_2021/lab1/valorvar", "valorvar", "PATH", NULL);
    }
    else if (pid > 0)
    {
        // parent process
	printf("parent process id: %d, wait to child: %d\n", getpid(), pid);
        
        wait(NULL);
	printf("end parent\n");
    }
    else
    {
        // fork failed
        printf("fork() failed!\n");
        return 1;
    }

    

    return 0;
}
