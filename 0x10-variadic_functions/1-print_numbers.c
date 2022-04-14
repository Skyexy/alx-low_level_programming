#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: number of arguments
 * @separator: what seprates the integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int s;
	va_list vl;

	va_start(vl, n);

	if (separator == NULL)
	{
		separator = "";
	}
	for (s = 0; s < n; s++)
	{
		printf("%d", va_arg(vl, int));

		if (s < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
