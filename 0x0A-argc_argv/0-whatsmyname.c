#include "main.h"
#include <stdio.h>

/**
 * main - this print prints the name of a program
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char *t = argv[0];

	while (*t != '\0')
	{
		_putchar(*t);
		t++;
	}
	return (0);
}
