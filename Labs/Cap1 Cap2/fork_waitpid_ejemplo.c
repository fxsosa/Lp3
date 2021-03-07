#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
    printf("--beginning of program\n");

    int counter = 0;
    int estado;
    pid_t pid = fork();
	
    if (pid == 0)
    {
        // child process
        
	printf("child process id: %d\n", getpid());
        sleep(3);
	printf("end child\n");
	return 5;
    }
    else if (pid > 0)
    {
        // parent process
	printf("parent process id: %d, wait to child: %d\n", getpid(), pid);
        
        waitpid(pid,&estado,0);
	printf("end parent, child status: %d\n", WEXITSTATUS(estado));
    }
    else
    {
        // fork failed
        printf("fork() failed!\n");
        return 1;
    }
}
