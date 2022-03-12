#include <stdio.h>

/**
 * main - buid hexadecimal
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 1;
	char b = 'a';

	while (a <= 16)
	{
		if (a < 10)
		{
			putchar(a + '0');
		}
		if (a > 10)
		{
			putchar(b);
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
