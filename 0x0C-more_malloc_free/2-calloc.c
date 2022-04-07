#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: size of memry
 * @size: number of mem in byts
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (!ptr)
	{
		return (NULL);
	}
	while (i < (size * nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
