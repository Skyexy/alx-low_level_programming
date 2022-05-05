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
    char *argv[] = {"ls", "-l", "/tmp", NULL};
    pid_t my_pid;
    pid_t ly_pid;
    pid_t ky_pid;
    pid_t ny_pid;
    pid_t xy_pid;
    int y;

    if (execve(argv[0], argv, NULL) == -1)
    {
        perror("Error:");
    }
    my_pid = fork();
    if (my_pid == 0)
    {
        printf("Wait for me, wait for me\n");
    }
    else
    {
        wait(&y);
    }
    ly_pid = fork();
    if (ly_pid == 0)
    {
        printf("Wait for me, wait for me\n");
    }
    else
    {
        wait(&y);
    }
    ky_pid = fork();
    if (ky_pid == 0)
    {
        printf("Wait for me, wait for me\n");
    }
    else
    {
        wait(&y);
    }
    xy_pid = fork();
    if (ny_pid == 0)
    {
        printf("Wait for me, wait for me\n");
    }
    else
    {
        wait(&y);
    }
    xy_pid = fork();
    if (xy_pid == 0)
    {
        printf("Wait for me, wait for me\n");
    }
    else
    {
        wait(&y);
    }
    return (0);
}
