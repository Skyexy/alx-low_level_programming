#include "main.h"

/**
 * leet - this encodes a string in 1337 
 * @sy: string to be encoded
 * Return: sy
 */

char *leet(char *sy)
{
	int i;
	int p;
	for (i = 0; sy[i] != '\0'; i++)
	{
		p = sy[i];
		if (p == 97 || p == 65)
		{
			sy[i] = 52;
		}
		else if (p == 101 || p == 69)
		{
			sy[i] = 51;
		}
		else if (p == 111 || p == 79)
		{
			sy[i] = 48;
		}
		else if (p == 116 || p == 84)
		{
			sy[i] = 55;
		}
		else if (p == 108 || p == 76)
		{
			sy[i] = 49;
		}
	}
	return (sy);
}
