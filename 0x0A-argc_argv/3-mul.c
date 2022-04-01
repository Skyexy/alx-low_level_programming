#include <stdio.h>

/**
 * main - this print prints the name of a program
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m;
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	m = ((*argv[1] - '0') * (*argv[2] - '0'));
	printf("%d\n", m);
	return (0);
}
