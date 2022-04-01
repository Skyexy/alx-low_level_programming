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
	num = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while ( n != 0)
	{
		if (n > 0)
		{
			if (n - 25)
			{
				n -= 25;
				num++;
				continue;
			}
			else if (n - 10)
			{
				n -= 10;
				num++;
				continue;
			}
			else if (n - 5 == 0)
			{
				n -= 5;
				num++;
				continue;
			}
			else if (n - 2 == 0)
			{
				n -= 2;
				num++;
				continue;
			}
			else if (n - 1 == 0)
			{
				n -= 1;
				num++;
				continue;
			}
			else{
				printf("%d", num);
				break;
			}
		}
	}
	printf("%d\n", n);
	return (0);
}
