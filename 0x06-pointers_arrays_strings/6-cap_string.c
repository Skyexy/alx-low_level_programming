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

	for (i = 0; sy[i] != '\0'; i++)
	{
		if (sy[i] == 44 || sy[i] == 59 || sy[i] == 46 || sy[i] == 36
		|| sy[i] == 63 || sy[i] ==
		34 || sy[i] == 40 || sy[i] == 41 || sy[i] == 123
		|| sy[i] == 125 || sy[i] == 32 || sy[i] == 9 || sy[i] == 10)
		{
			i++;
			if (sy[i] == 44 || sy[i] == 59 || sy[i] == 46 || sy[i] == 36 || sy[i] == 63
			|| sy[i] == 34 || sy[i] == 40 || sy[i] == 41 || sy[i] == 123
			|| sy[i] == 125 || sy[i] == 32 || sy[i] == 9 || sy[i] == 10)
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
