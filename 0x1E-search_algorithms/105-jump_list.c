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
int linear_searc(listint_t *list, size_t size, int value, size_t low)
{
	size_t ind = 1;
	listint_t *array = list;
	listint_t *point;

	if (array == NULL)
	{
		return (-1);
	}
	while (ind < size)
	{
		point = j + 
		printf("Value checked array[%d] = [%d]\n", j, );
		if (array[j] == value)
		{
			break;
		}
		j++;
		ind++;
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
listint_t *jump_list(listint_t *list, size_t size, int value);
{
	size_t low = list;
	size_t j = sqrt(size);
	
	if (list == NULL)
	{
		return (-1);
	}
	if (list->n == value)
	{
		printf("Value checked array[%d] = [%d]\n", low->index, low->n);
		return (list);
	}
	while (low->n < value)
	{
		printf("Value checked array[%d] = [%d]\n", low->index, low->n);
		low = low + j;
		j += sqrt(size);
		if (j >= size || low == NULL)
			break;
	}
	printf("Value found between indexes[%d] and [%ld]\n", low->index, j);
	return linear_searc(array, size, value, low);
}
