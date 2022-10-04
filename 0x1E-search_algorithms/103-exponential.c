#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int min(int a, int b)
{
	if (b > a)
	    return a;
	else
		return b;
}

/**
 * binary - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @low: low of elements in array
 * @high: high of elements in array
 * @value: the value to search for
 *
 * Return: int
 */
int binary(int *array, int value, int low, int high)
{
	size_t mid = (low + high) / 2;
	int loop;
	int j;

	if (high < low)
		return (-1);
	if (array[mid] == value)
		return (mid);
	printf("Searching in array: ");
	for (loop = low; loop <= high; loop++)
	{
		printf("%d", array[loop]);
		if (loop <= (high - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
	if (array[mid] > value)
		high = mid - 1;
	else
		low = mid + 1;
	j = binary(array, value, low, high);
	return (j);
}

/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: Always EXIT_SUCCESS
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t j = 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (array[j] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		j  = j * 2;
		if (j >= size)
			break;
	}
	printf("Value found between indexes[%ld] and [%ld]\n", j/2, min(j, size-1));
	return (binary(array, value, j/2, min(j, size-1)));
}
