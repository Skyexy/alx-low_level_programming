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
	int s;
	int f;
	
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	m = *argv[1] - '0';
	s = *argv[2] - '0';
	f = m * s;
	printf("%d\n", f);
	return (0);
}
