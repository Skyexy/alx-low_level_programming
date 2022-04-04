#include <stdlib.h>
#include <stdio.h>

/*
* creat_array - this creates an array of chars,
* @size: size of array
* @c: the char to be put in array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *m;

	m = malloc(sizeof(char) * size);
	if (m == NULL)
	{
		return NULL;
	}
	while (i < size)
	{
		m[i] = c;
		i++;
	}
	return (m);
}
