#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: the string with character
 * @c: the char to be located
 * Return: nothing
 */
char *_strchr(char *s, char c)
{
	int y;
	int h;
	char *p = NULL;

	for (y = 0; s[y] != c; y++)
	{
	}
	for (h = y; s[h] != '\0'; h++)
	{
		printf("%c", s[h]);
	}
	if (s[y] == '\0')
	{
		printf("%s", p);
	}
	return (0);
}
