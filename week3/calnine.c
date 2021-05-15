#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
main()
{
    int id = fork();
    float fd[5], m, a, F;
    pid_t child1;
    pid_t child2;
    pipe(fd);
    if ((child1 = fork()) == -1)
    {
        perror("Error\n");
        exit(1);
    }
    if (child1 == 0)
    {
        printf("Enter m :")
            scanf("%f", m);
        F = m * 100;
        printf("Answer is %f", F);
        close(fd[0]);
    }
    else
    {
        printf("Enter m :")
            scanf("%f", m);
        printf("Enter a :")
            scanf("%f", a);
        F = m * a;
        printf("Answer is %f", F);
        close(fd[1]);
    }
    return 0;
}

int main()
{

    int rk[4], nbytes;
    pid_t child1;
    pid_t child2;
    Double r[];
    pipe(rash);
    Double answer = 0;

    if ((child1 = fork()) == -1)
    {
        perror("Error/n");
        if (i = 0; i < 4; i++)
        {
            printf(r[i]);
        }
        exit(1);
    }
    if (child2 == -1)
    {
        perror("Error/n");
        if (i = 0; i < 4; i++)
        {
            r[i] = i * 1000;
        }
        exit(1);
    }
}