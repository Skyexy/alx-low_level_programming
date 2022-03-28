#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: the string with character
 * @c: the char to be located
 * Return: s and nothing when s is null
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
	return (s);
}
