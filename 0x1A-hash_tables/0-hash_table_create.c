#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size __attribute__((unused)))
{
	hash_table_t *memory = malloc(sizeof(hash_table_t));
	memory -> size = size;
	hash_node_t **slow_memory = malloc(sizeof(char *));
	unsigned long int i = 0;
	hash_node_t *new;

	*slow_memory = malloc(sizeof(hash_node_t));
	new = *slow_memory;

	if (memory == NULL || slow_memory == NULL)
	{
		return (NULL);
	}
	
	while (i < size)
	{
	        new -> next = malloc(sizeof(hash_node_t));
	        new = new -> next;
	        i++;
	}
	new -> next = NULL;
	memory -> array = slow_memory;
	return (memory);
}
