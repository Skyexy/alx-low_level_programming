#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: the string with character
 * @c: the char to be located
 * Return: nothing
 */
char *_strchr(char *s, char c)
{
	while (s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
