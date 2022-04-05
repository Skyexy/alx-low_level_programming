#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: this is the string to be split
 * Return: t if susscesfull;
 */
char **strtow(char *str)
{
	int p = 0, g = 0, u = 0, z = 0, y = 0;
	char **t;

	if (str == NULL || str == "")
		return (NULL);
	while (str[p] != '\0')
	{
		if (str[p] != ' ')
			g++;
		p++;
	}
	t = malloc(sizeof(char *) * g);
	p = 0;
	if (t == NULL)
		return (NULL);
	while (str[p] != '\0')
	{
		g = 0;
		y = 0;
		if (str[p] == ' ')
		{
			u++;
			p++;
			continue;
		}
		while (str[p] != ' ')
		{
			g++;
			p++;
		}
		t[z] = malloc(sizeof(char) * g);
		while (str[u] != ' ')
		{
			t[z][y] = str[u];
			u++;
			y++;
		}
		z++;
	}
	return (t);
}
