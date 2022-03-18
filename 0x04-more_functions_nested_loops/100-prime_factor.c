#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: Always 0
 */
int main(viod)
{
	long c;
	long j;
	long num = 612852475143;

	for (c = 0; c < num; c++)
	{
		if (num % c == 0)
		{
			j = c;
			num = num / c
		}
	}
	printf("%ld\n", j);
	return (0);
}
