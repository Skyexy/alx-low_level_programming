#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size __attribute__((unused)))
{
	hash_table_t *memory = malloc(sizeof(hash_node_t));

	if (memory == NULL)
	{
		return (NULL);
	}
	return (memory);
}
