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
int binary(int *array, int value, int low, int high)
{
	size_t mid = (low + high) / 2;
	
	printf("Searching in array: ");
	for(int loop = low; loop < high; loop++)
	{
		printf("%d", array[loop]);
		if loop < (high - 1)
		{
			printf(", ");
		}
	}
	if (high == low)
		retun (-1);
	if (array[mid] == value)
		return (mid);
	elif (array[mid] > value)
		low = mid + 1;
	else
		high = mid - 1;
	int j = int binary(array, value, low, high);
	return (j);
}
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		retun (-1);
	else
		int j = binary(array, value, 0, size);
	return (j)
}
