#include <stdio.h>
#include <stdlib. h>
#inclide "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t -> size = size;
	hash_table_t -> array = malloc(sizeof(char*) * size)
}
