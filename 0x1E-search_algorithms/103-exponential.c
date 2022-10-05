#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - Search for the value in a sorted array of integers
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if it's not there
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int high, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound >= size)
		high = size - 1;
	else
		high = bound;

	printf("Value found between indexes [%d] and [%d]\n", bound / 2, high);
	return (binary_search_recursive(array, bound / 2, high, value));
}

/**
 * binary_search_recursive - Search for the value in a sorted array of integers
 * @array: Pointer to the first element of the array to search
 * @low: The left bound
 * @high: The right bound
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if it's not there
 */
int binary_search_recursive(int *array, int low, int high, int value)
{
	int mid;

	if (high >= low)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_search_recursive(array, low, mid - 1,
							value));
		return (binary_search_recursive(array, mid + 1, high, value));
	}

	return (-1);
}

/**
 * print_array - Print elements of an array between two indexes
 * @array: The array to print
 * @start: The starting index
 * @end: The ending index
 */
void print_array(int *array, unsigned int start, unsigned int end)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
