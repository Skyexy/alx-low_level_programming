#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size __attribute__((unused)))
{
	(hash_table_t -> size) = size;
	(hash_table_t -> array) = malloc(sizeof(hash_node_t) * size);
	
	if (hash_table_t -> array == NULL)
	{
		return (NULL);
	}
	return ((hash_table_t -> array));
}
