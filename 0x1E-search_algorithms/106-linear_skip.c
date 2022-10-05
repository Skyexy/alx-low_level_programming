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
	listint_t *ind =  low;
	listint_t *array = list;

	if (array == NULL || ind == NULL)
		return (NULL);

	while (ind->index <= size->index)
	{
		printf("Value checked array[%lu] = [%d]\n", ind->index, ind->n);
		if (ind->n == value)
			break;
		ind = ind -> next;
		if (ind == NULL)
			break;
		
	}
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
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	listint_t *now = list;
	listint_t *next = list -> express;
	
	if (list == NULL)
		return (NULL);

	while (next -> n < value)
	{
		printf("Value checked array[%lu] = [%d]\n", (next -> index), (next -> n));
		now = next;
		next = next -> express;
		
		if (next -> index == size)
			break;
	}
	printf("Value found between indexes[%d] and [%d]\n", now -> index,  min(next -> index, size- 1));
	now = linear_searc(list, next, value, now);
	return now;
}