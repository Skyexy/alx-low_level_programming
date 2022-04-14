#include "function_pointers.h"

/**
 * print_name - this prints the name of a function
 * @name: the name of waht shold be printed
 * @f: this is the funcliton
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
