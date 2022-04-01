#include <stdio.h>
/**
 * main - this print prints the name of a program
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	while ( i < argc)
	{
		printf("%s\n", argv[0]);
		i++;
	}
	return (0);
}
