#include "main.h"

/**
 * _strncat - concentrates two srings
 * Return: dest
 * @dest: the lead string
 * @src: this is the baby string
 * @n: is the number of string to be conc
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (k = 0; src[k] != '\0'; k++)
	{
	}
	if (n > k)
	{
		for (j = 0; src[j] != '\0'; i++, j++)
		{
			dest[i] = src[j];
		}
	}
	if (n <= k)
	{
		for (j = 0; j < n; i++, j++)
		{
			dest[i] = src[j];
		}
	}
	return (dest);
}
