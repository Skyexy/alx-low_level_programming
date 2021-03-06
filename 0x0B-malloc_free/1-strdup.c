#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to the newly allocated space
 * @str: pointer to be copied
 * Return: t and NULL is t = NULL
 */
char *_strdup(char *str)
{
	char *t;
	int y = 0;
	int p = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[y] != '\0')
	{
		y++;
	}
	t = malloc((sizeof(char) * y) + 1);
	if (t == NULL)
	{
		return (NULL);
	}
	while (p <= y)
	{
		t[p] = str[p];
		p++;
	}
	t[p] = '\0';
	return (t);
}
