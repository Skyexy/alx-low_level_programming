#include "function_pointers.h"

/**
 * print_name - this prints the name of a function
 * @name: the name of waht shold be printed
 * @f: this is the funcliton
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
