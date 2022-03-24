#include "main.h"

/**
 * reverse_array - this revers the content of an array of integers
 * @a: array
 * @n: number of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int s;
	int j;

	for (i = 0; i < n; i++)
	{
	}

	i--;

	for (s = 0; s < n / 2; s++, i--)
	{
		j = a[s];
		a[s] = a[i];
		a[i] = j;
	}
}
