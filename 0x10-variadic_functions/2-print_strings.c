#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: it seprates the strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int s;
	va_list vl;

	va_start (vl, n);
	for (s = 0; s < n; s++)
	{
		printf ("%s", va_arg (vl, char*));

		if (s < (n - 1))
		{
			printf ("%s", separator);
		}
	}
	printf ("\n");
}
