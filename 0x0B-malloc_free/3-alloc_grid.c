#include <stdio.h>
#include <stdlib.h>

/**
alloc_grid - returns a pointer to a 2 dimensional array of integers
@width: the width of the array
@height: the height of the array
Return: array or 0

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0;
	int j = 0;
	
	if (width <= 0|| height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		array[i]= malloc(sizeof(int) * width);
		while(j < width)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array);
}
