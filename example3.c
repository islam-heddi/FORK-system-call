// this code creates two new processes in which they successively creative path

#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid = getpid();
    printf("pid : %d\n", pid);
    if (fork() == 0)
    {
        pid = getpid();
        printf("pid : %d\n", pid);
        if (fork() == 0)
        {
            pid = getpid();
            printf("pid : %d\n", pid);
        }
    }
}