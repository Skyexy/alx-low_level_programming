#include "function_pointers.h"

/**
 * int_index - this prints the name of a function
 * @array: the name of waht shold be printed
 * @size: this is the funcliton
 * @cmp: function to be passed
 * Return: -1 and something else otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 ||array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
