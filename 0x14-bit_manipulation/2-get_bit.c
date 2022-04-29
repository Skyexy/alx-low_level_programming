#include <stdio.h>
#include "main.h"

/**
 *  returns the value of a bit at a given index
 * @n: the number to be changed
 * @index: the nindex to change
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned int o = -1;

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
		o = n & 1;
	}
	return (o);
}
