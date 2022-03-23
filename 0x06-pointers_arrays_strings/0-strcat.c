#include "main.h"

/**
 * _strcat - concentrates two srings 
 *
 * return: the string to be concentrated
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int v;
	int j;
	char c;

	v = 0;
	while(dest[v] != '\0')
	{
		v++;
	}
	for (i = 0; i < v; i++)

	i++;
	dest[i] = 32;
	v = 0;
	i++;

	while(src[v] != '\0')
	{
		v++;
	}
	for (j = 0; j <= v; j++)
	{
		c = src[j];
		dest[i] = c;
		i++;
	}
	return(dest);
}
