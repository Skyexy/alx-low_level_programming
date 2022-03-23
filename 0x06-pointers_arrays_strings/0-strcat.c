#include "main.h"

/**
 * _strcat - concentrates two srings
 *
 * Return: dest
 *
 * @dest: the lead string
 * @src: this is the baby string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}


	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
