#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: Always EXIT_SUCCESS
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t j = sqrt(size);

	if (array == NULL)
	{
		return (-1);
	}
	while (j < size)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		low = j;
		j += sqrt(size);
	}
}
