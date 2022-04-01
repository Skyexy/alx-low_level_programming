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
	int s[5] = {25, 10, 5, 2, 1};
	int num = 0;
	int f = 0;
	int n = atoi(argv[1]);
	int g;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (n > 0)
	{
		g = s[f];
		if ((n - g) >= 0)
		{
			n -= g;
			num += 1;
			continue;
		}
		f += 1;
	}
	printf("%d\n", num);
	return (0);
}
