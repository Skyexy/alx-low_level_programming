#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in `s` that matches one of the bytes in
 */
char *_strpbrk(char *s, char *accept)
{
	int y;
	int p;

	for (y = 0; s[y] != '\0'; y++, s++)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				return (s);
			}
		}
	}
	return (0);
}
