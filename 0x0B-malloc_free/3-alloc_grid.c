#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: array or 0
 */

int **alloc_grid(int width, int height)
{
	int **array;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = width;
	unsigned int p = height;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(sizeof(int*) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < p)
	{
		array[i] = malloc(sizeof(int) * width);
		while (j < k)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
		if (array[i] == NULL)
		{
			return (NULL);
		}
	}
	return (array);
}
