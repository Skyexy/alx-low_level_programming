#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * Return: s;
 * @n:number of bytes of the memory area pointed to by s to be filled
 * @s:the buffer to be filled
 * @b: the bytes to fill s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}
