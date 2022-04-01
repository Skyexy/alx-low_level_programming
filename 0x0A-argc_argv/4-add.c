#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

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
	int u;

	if (argc > 1)
	{
		while (o < argc)
		{
			u = atoi(argv[o]);
			if (isdigit(u))
			{
				n += atoi(argv[o]);
				o++;
			}
			printf("Error");
			return (1);
		}
	}
	printf("%d\n", n);
	return (0);
}
