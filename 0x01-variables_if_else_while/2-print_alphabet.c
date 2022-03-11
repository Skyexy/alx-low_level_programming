#include <stdio.h>

/**
 * main - it
 *
 * Return: 0 on sucess
 *
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
