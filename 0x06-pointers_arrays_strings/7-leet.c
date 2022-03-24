#include "main.h"

/**
 * leet - this encodes a string in 1337
 * @sy: string to be encoded
 * Return: sy
 */

char *leet(char *sy)
{
	int i;
	int r[5] = { 97, 101, 111, 116, 108};
	int l[5] = { 65, 69, 79, 84, 76};
	int s[5] = { 52 ,51, 48, 55, 49};
	int y;

	for (i = 0; sy[i] != '\0'; i++)
	{
		for (y = 0; y < 5; y++)
		{
			if (sy[i] == r[y] || sy[i] == l[y])
			{
				sy[i] = s[y];
			}
		}
	}
	return (sy);
}
