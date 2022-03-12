#include <stdio.h>

/**
* main - array
*
*Return: 0 for sucess
*/
int main(void)
{
	int a = 0;

	for (; a < 10;)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	return (0);
}
