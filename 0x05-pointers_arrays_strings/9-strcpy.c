#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array
 * of integers, followed by a new line.
 * @a: int pointer variable
 * @n: int type variable
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		*(dest + j) = *(src + j);
	}

	return (dest);
}
