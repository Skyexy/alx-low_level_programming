#include <stdlib.h>
#include <stdio.h>

/*
* creat_array - this creates an array of chars, and initializes it with a specific char
* @size: size of array
* @c: the char to be put in array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *m;
	m = malloc(sizeof(char) * size);/* this is used to allocate dynamic memory to pointer m*/

	if (m == NULL)
	{
		return(0);
	}
	while (i < size)
	{
		m[i] = c;
		i++;
	}
	return(m);
}
