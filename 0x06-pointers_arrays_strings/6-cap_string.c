#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @sy: this is the string to be capitalized
 * Return: sy
 */

char *cap_string(char *sy)
{
	int i;
	int j = 97;
	int k = 0;
	int y;
	int z = 0;
	int p;

	for (i = 0; sy[i] != '\0'; i++)
	{
		p = sy[i];
		if (p == 44 || p == 59 || p == 46 || p == 36 || p == 63 || p ==
		34 || p == 40 || p == 41 || p == 123 || p == 125 || p == 32 || p == 9)
		{
			i++;
			if (sy[i] == 10)
			{
				i++;
			}
				if (sy[i] >= 97 && sy[i] <= 122)
				{
					while (j != sy[i])
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
	}
	return (sy);
}
