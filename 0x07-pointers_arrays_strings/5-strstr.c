#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: a string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int y;
	int p;

	for (y = 0; needle[y] != '\0'; y++)
	{
		for (p = 0; haystack[p] != '\0'; p++)
		{
			if (needle[y] == haystack[p])
			{
				return (&haystack[p]);
			}
		}
	}
	return (0);
}
