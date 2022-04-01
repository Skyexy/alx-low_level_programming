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
	int c = 1;
	int y = 1;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	while (c < argc)
	{
		y *= atoi(argv[c]);
		c++;
	}
	printf("%d\n", y);
	return (0);
}
