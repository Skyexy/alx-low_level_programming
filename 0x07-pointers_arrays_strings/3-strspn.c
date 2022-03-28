#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: s to be surfed
 * @accept: the of this
 * Return: g
 */
unsigned int _strspn(char *s, char *accept)
{
	int y;
	int k;
	int g = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (accept[k] == s[y])
			{
				g++;
				break;
			}
		}
		if (accept[k] == '\0')
		{
			break;
		}
	}
	return (g);
}
