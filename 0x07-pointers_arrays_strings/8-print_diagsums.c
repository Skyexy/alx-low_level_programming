#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix
 * @a: 2D array of int types
 * @size: size of array (square)
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int p = 0;
	int sizer = size * size;

	while (i < sizer)
	{
		p += a[i];
		i = i + size + 1;
	}
	printf("%d, ", p);
	i = size - 1;
	p = 0;
	while (i < sizer - (size - 1))
	{
		p += a[i];
		i = i + (size - 1);
	}
	printf("%d\n", p);
}
