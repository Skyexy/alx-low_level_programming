#include <stdio.h>
#include <stdlib.h>

/**
malloc_checked - allocates memory using malloc.
int: number of memory
Return: Returns a pointer to the allocated memory

void *malloc_checked(unsigned int b)
{
	void *ptr;

	prt = malloc(b);
	if (ptr == NULL)
		exit(98);
}
