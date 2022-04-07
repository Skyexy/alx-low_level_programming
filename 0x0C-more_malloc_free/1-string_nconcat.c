#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int p = 0;
	int s = 0;
	int f = 0;
	int j = 0;
	int u = 0;
	char *ptr;

	while (s1[p] != '\0')
		p++;
	while (s2[u] != '\0')
		u++;
	if (n > u)
		n = u;
	ptr = malloc(sizeof(char) * (p + n + 1))
	while (f < (p + n))
	{
		if (f < p)
		{
			ptr[f] = s1[s];
			s++;
		}
		else
		{
			ptr[f] = s2[j];
			j++;
		}
		f++;
	}
	ptr[f] = '\0';
} 
