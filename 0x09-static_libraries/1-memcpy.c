#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: the string i copy to
 * @src: the sring to copy
 * @n: the number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
