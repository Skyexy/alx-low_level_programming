#include <stdio.h>

/**
* main - provide loop
*
*Return: Always 0 sucess
*/
int main(void)
{
	int i = 0;
	int j = i +1;
	for (; i <= 9;)
	{
		for (; j <= 9;)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (((i * 10) + j) < 89)
		{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
