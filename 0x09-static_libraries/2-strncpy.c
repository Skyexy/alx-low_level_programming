#include "main.h"

/**
 * _strncpy - a function that copies the n nunber of string to dest
 * Return: dest
 * @dest: where src is to be copied to
 * @n: number of strings in src to be copied
 * @src: string to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[k] = src[k];
	}

	for (; k < n; k++)
		dest[k] = '\0';
	return (dest);
}
