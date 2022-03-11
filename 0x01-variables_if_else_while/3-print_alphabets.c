#include <stdio.h>

/**
 * main - this is for discription
 *
 * Return: 0 on success
 */
int main(void)
{
	char a = 'a';
	char b = 'A';
	int num = 1;

	while (num <= 52)
	{
		if (num <= 26)
		{
			putchar(a++);
		}
		else if (num > 26)
		{
			putchar(b++);
		}
		num++;
	}
	putchar('\n');
	return (0);
}
