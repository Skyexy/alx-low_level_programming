#Include "main.h"

/**
 * reverse_array - reverse a array of numbers
 * @a: this is the array
 * @n: number of the array
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
