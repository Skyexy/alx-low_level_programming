#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *t;
	int y = 0;
	int p;
	
	while (str[y] != '\0')
	{
		y++;
	}
	t = malloc(sizeof(char)*y);
	if (t == NULL)
	{
		return (NULL);
	}
	while(p <= y)
	{
		t[p] = str[p];
		p++;
	}
	t[p] = '\0';
	return (0);
}
