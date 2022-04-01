#include "main.h"

/**
 * _strcmp - compares two strings s1 and s2
 * @s1: the first string
 * @s2: the second string
 * Return: m
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int z;
	int y;
	int h;
	int m;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		i++;
	}
	for (z = 0; z <= i; z++)
	{
		if (s1[z] != s2[z])
		{
			y = s1[z];
			h = s2[z];
			m = y - h;
			break;
		}
		else
		{
			m = 0;
		}
	}
	return (m);
}
