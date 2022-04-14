#include "function_pointers.h"

/**
 * array_iterator - this prints the name of a function
 * @array: the name of waht shold be printed
 * @size: this is the funcliton
 * @action: function to be passed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
