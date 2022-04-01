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
	int n = 0;
	int o = 1;

	if (argc > 1)
	{
		while (o < argc)
		{
			if (*argv[o] - '0' >= 1 && *argv[o] - '0' <= 9)
			{
				n += atoi(argv[o]);
			}
			else
			{
				printf("Error");
				return (1);
			}
		}
	}
	printf("%d\n", n);
	return (0);
}
