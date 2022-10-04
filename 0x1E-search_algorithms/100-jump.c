#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include<math.h>

int min(int a, int b)
{
	if (b > a)
	    return a;
	else
		return b;
}

/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: Always EXIT_SUCCESS
 */
int linear_searc(int *array, size_t size, int value, size_t low)
{
	size_t j = low;

	if (array == NULL)
	{
		return (-1);
	}
	while (j < size)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			break;
		}
		j++;
	}
	if (j == size)
		return (-1);
	else
		return (j);
}

/**
 * jump_searc - searches for a value in an array of integers
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
	while (array[min(j, size - 1)] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		low = j;
		j += sqrt(size);
	}
	printf("Value found between indexes[%ld] and [%ld]\n", j, low);
	return linear_searc(array, size, value, low);
	
}
