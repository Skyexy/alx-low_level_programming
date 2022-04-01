#include <stdio.h>
#include <stdlib.h>

/**
 * main - this print prints the name of a program
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m;
	int s;
	int f;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	s = atoi(argv[2]);
	f = m * s;
	printf("%d\n", f);
	return (0);
}
