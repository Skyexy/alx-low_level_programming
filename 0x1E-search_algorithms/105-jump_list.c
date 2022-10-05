#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include<math.h>

listint_t *jump(listint_t *list, size_t high, size_t lowt)
{
	listint_t *low = list;
	size_t j = lowt;
	
	while (j < high)
	{
		if (low == NULL)
			return (NULL);
		low = low -> next;
		j++;
	}
	return low;
}

/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: Always EXIT_SUCCESS
 */
listint_t *linear_searc(listint_t *list, listint_t *size, int value, listint_t *low)
{
	listint_t ind =  low;
	listint_t *array = list;

	if (array == NULL || ind == NULL)
	{
		return (NULL);
	}
	while (ind != size)
	{
		printf("Value checked array[%lu] = [%d]\n", ind->index, ind->n);
		ind = ind -> next;
		if (ind->n == value)
		{
			break;
		}
		
	}
	if (ind == size)
		return (NULL);
	else
		return ind;
}

/**
 * jump_searc - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: Always EXIT_SUCCESS
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *now = list;
	listint_t *next;
	size_t j = sqrt(size);
	int low;
	
	if (list == NULL)
		return (NULL);

	printf("Value checked array[%lu] = [%d]\n", (now -> index), (now -> n));
	if ((list->n) == value)
	{
		return (list);
	}
	while ((now -> n) < value)
	{
		next = jump(now, j, low);
		now = next;
		low = j;
		j += sqrt(size);
		printf("Value checked array[%lu] = [%d]\n", (now -> index), (now -> n));
		
		if (j >= size)
			break;
	}
	printf("Value found between indexes[%d] and [%ld]\n", low, j);
	now = linear_searc(list, j, value, (low->index));
	return low;
}
