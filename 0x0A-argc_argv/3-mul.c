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
	unsigned int c = 1;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", c);
	return (0);
}
