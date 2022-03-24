#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @sy: lowercase string
 * Return: sy
 */
char *string_toupper(char *sy)
{
	int i;
	int j = 97;
	int k = 0;
	int y;
	int z = 0;
	for (i = 0; sy[i] != '\0'; i++)
	{
		if (sy[i] >= 97 && sy[i] <= 122)
		{
			while (j != sy[i] )
			{
				k++;
				j++;
			}
			j = 97;
			for (y = 'A'; z < k; y++)
			{
				z++;
			}
			k = 0;
			z = 0;
			sy[i] = y;
		}
	}
	return(sy);
}
