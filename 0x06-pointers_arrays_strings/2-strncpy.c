#include "main.h"

/**
 * _strncpy - copys two ctring to onr with respect to num
 *
 * Return: dest
 * @char: parent char
 * @scr: baby char
 * @n: int 
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;
	int k;
	int y = 0;

	for (k = 0; k < 98 - 1; k++, l++, y++)
	{
		if (y < n)
		{
			dest[l] = src[k];
		}
	}
	return(dest);
}
