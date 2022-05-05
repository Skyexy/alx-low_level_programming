#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
    char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
    pid_t ay_pid;
    pid_t by_pid;
    pid_t cy_pid;
    pid_t dy_pid;
    pid_t ey_pid;
    int y;

    ay_pid = fork();
    if (ay_pid == 0)
    {
        if (execve(argv[0], argv, NULL) == -1)
        {
            perror("Error:");
        }
    }
    else
    {
        wait(&y);
    }
    by_pid = fork();
    if (by_pid == 0)
    {
        if (execve(argv[0], argv, NULL) == -1)
        {
            perror("Error:");
        }
    }
    else
    {
        wait(&y);
    }
    cy_pid = fork();
    if (cy_pid == 0)
    {
        if (execve(argv[0], argv, NULL) == -1)
        {
            perror("Error:");
        }
    }
    else
    {
        wait(&y);
    }
    dy_pid = fork();
    if (dy_pid == 0)
    {
        if (execve(argv[0], argv, NULL) == -1)
        {
            perror("Error:");
        }
    }
    else
    {
        wait(&y);
    }
    ey_pid = fork();
    if (ey_pid == 0)
    {
        if (execve(argv[0], argv, NULL) == -1)
        {
            perror("Error:");
        }
    }
    else
    {
        wait(&y);
    }
    return (0);
}
