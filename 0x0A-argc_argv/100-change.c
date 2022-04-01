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
	int n = atoi(argv[1]);
	int s[5] = {25, 10, 5, 2, 1};
	int num = 0;
	int f = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (n != 0)
	{
		if (n > 0)
		{
			if (n - s[f])
			{
				n -= s[f];
				num++;
				continue;
			}
			f++;
		}
	}
	printf("%d\n", n);
	return (0);
}
