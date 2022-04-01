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

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		if (*(argv[o]) >= '1' && *(argv[o]) <= '9')
		{
			while (o < argc)
			{
				n += atoi(argv[o]);
			}
		}
		else
		{
			printf("Error");
			return (1);
		}
	}
	printf("%d", n);
	return (0);
}
