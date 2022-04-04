#include <stdlib.h>
#include <stdio.h>

/*
* create_array - this creates an array of charc, with memory of size
* @size: size of array
* @c: the char to be put in array
* Return: m and NULL if size is 0 or prog fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *m;

	m = malloc(sizeof(char) * size);
	if (m == NULL || size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		m[i] = c;
		i++;
	}
	return (m);
}
