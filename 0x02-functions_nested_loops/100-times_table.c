#include "main.h"

/**
 * print_times_table - Print times table
 *
 * @n: Number of times table
 * No return
 */
void print_times_table(int n)
{
	int a, b, p = 0;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				p = a * b;
				if (b > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (p < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + p);
					}
					else if (p >= 10 && p < 100)
					{
						_putchar(' ');
						_putchar('0' + (p / 10));
						_putchar('0' + (p % 10));
					}
					else if (p >= 100)
					{
						_putchar('0' + (p / 100));
						_putchar('0' + ((p / 10) % 10));
						_putchar('0' + (p % 10));
					}
				}
				else
					_putchar('0' + p);
			}
			_putchar('\n');
		}
	}
}
