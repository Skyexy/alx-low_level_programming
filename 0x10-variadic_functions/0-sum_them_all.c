#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: s;
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;
	
	if (n == 0)
	{
		return (0);
	}
	va_list vl;
	va_start (vl, n);
	for (i = 0; i < n; i++)
	{
		s += va_arg (vl, int);
	}
	return (s);
}
