#include "main.h"

/**
 * jack_bauer - life happenings
 *
 * void function: nothing to return
 */
void jack_bauer(void)
{
	int h2, h1, m2, m1;

	for (h2 = 0; h2 < 3; h2++)
	{
		for (h1 = 0; h1 <= 9; h1++)
		{
			for (m2 = 0; m2 < 6; m2++)
			{
				for (m1 = 0; m1 <= 9; m1++)
				{
					_putchar(h2 + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m2 + '0');
					_putchar(m1 + '0');
					_putchar('\n');
					if (m1 == 10)
					{
						m1 = 0;
					}
				}
				if (m2 == 6)
					m2 = 0;
			}
			if (h1 == 3 && h2 == 2)
				h1 = 10;
		}
	}
}
