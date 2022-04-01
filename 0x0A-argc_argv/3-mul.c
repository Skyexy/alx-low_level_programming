#include <stdio.h>

/**
 * _atoi - a function that converts string to integer
 * @s: A string input
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int n = 0;
	unsigned int total = 0;
	int identify = 0;
	
	while(*s)
	{
		if (*s == '-')
		{
			n = 1;
			s++;
		}
		if (*s >= 1 && *s <= 9)
		{
			identify = 1;
			total = total * 10 + *s - '0';
			s++;
		}
		else if (identify == 0)
		{
			break;
		}
		identify = 0;
	}
	if (n == 1)
	{
		total = total * -1;
	}
	return (total);
}

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
	m = _atoi(argv[1]);
	s = _atoi(argv[2]);
	f = m * s;
	printf("%d\n", f);
	return (0);
}
