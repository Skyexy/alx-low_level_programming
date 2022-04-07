#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: first sring
 * @s2: second sring
 * @n: number of string
 * Return: prt
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p = 0;
	unsigned int s = 0;
	unsigned int f = 0;
	unsigned int j = 0;
	unsigned int u = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[p] != '\0')
		p++;
	while (s2[u] != '\0')
		u++;
	if (n > u)
		n = u;
	ptr = malloc(sizeof(char) * (p + n + 1));
	if (!ptr)
	{
		return (NULL);
	}
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
	return (ptr);
}
