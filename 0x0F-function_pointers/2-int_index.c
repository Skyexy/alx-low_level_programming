#include "function_pointers.h"

/**
 * array_iterator - this prints the name of a function
 * @array: the name of waht shold be printed
 * @size: this is the funcliton
 * @action: function to be passed
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
	}
}
