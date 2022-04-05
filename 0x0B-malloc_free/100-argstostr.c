#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: this is the number of commands
 * @av: this is an array of commands
 * Return: g;
 */

char *argstostr(int ac, char **av)
{
	int p = 0;
	int o = 0;
	char *g;
	int z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (p < ac)
	{
		int y = 0;
		char *r = av[p];

		while (r[y] != '\0')
		{
			y++;
			o++;
		}
		p++;
	}
	g = malloc((sizeof(char) * o) + (ac + 1));
	p = 0;
	if (g == NULL)
		return (NULL);
	while (p < ac)
	{
		int y = 0;
		char *r = av[p];

		while (r[y] != '\0')
		{
			g[z] = r[y];
			z++;
			y++;
		}
		g[z] = '\n';
		z++;
		p++;
	}
	g[z] = '\0';
	return (g);
}
