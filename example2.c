// this code creates only one process
#include <stdio.h>
#include <unistd.h>

int main()
{
    int pr = getpid();
    printf("the father : %d\n", pr);
    if (fork() == 0)
    {
        printf("the child")
    }
    else
    {
        printf("the father")
    }
    return 0;
}