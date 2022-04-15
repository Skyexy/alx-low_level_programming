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
	char *f;

	va_list vl;

	va_start(vl, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (s = 0; s < n; s++)
	{
		f = va_arg(vl, char*);
		if (f != NULL)
		{
			printf("%s", f);
		}
		else
		{
			printf("(nil)");
		}
		if (s < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
