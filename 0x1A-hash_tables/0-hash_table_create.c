#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size __attribute__((unused)))
{
	hash_table_t *memory = malloc(sizeof(hash_table_t));
	hash_node_t **slow_memory = malloc(sizeof(char *) * size);
	
	if (memory == NULL || slow_memory == NULL)
	{
		return (NULL);
	}
	memory -> size = size;
	memory -> array = slow_memory;
	return (memory);
}
