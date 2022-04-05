#include <stdio.h>
#include <stdlib.h>

char **strtow(char *str)
{
	int p = 0;
	int g = 0;
	int u = 0;
	int z = 0;
	int y = 0;
	char **t;
	while(str[p] != '\0')
	{
		if (str[p] != ' ')
			g++;
		p++;
	}
	t = malloc(sizeof(char*) * g);
	p = 0;
	while(str[p] != '\0')
	{
		g = 0;
		y = 0;
		if (str[p] == ' ')
		{
			u++;
			p++;
			continue;
		}
		while(str[p] != ' ')
		{
			g++;
			p++;
		}
		t[z] = malloc(sizeof(char) * g);
		while(str[u] != ' ')
		{
			t[z][y] = str[u];
			u++;
			y++;
		}
		t[z][y] = '\0';
		z++;
	}
	z++;
	t[z] = NULL;
	return(t);
}
