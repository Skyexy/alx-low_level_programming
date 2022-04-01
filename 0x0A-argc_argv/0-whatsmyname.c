#include "main.h"

/**
 * main - this print prints the name of a program
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		_putchar(*(argv[0]));
	}
	return (0);
}
