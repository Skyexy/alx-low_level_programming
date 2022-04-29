#include <stdio.h>

/**
 * int binary_to_uint - converts a binary number to an
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)

{
	int len;
	int squ = 1;
	int i;
	int total = 0;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				total += squ;
			}
			squ*=2;
		}
		else
			return (0);
	}
	return (total);
}
