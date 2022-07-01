#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: string used to generate hash value
 * @value: is the value associated with the key
 *
 * Return: 1 or else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));
	int size = ht->size;
	int hash = key_index((const unsigned char *)key, size);

	item->key = (char *)key;
	item->value = (char *)value;
	item->next = (ht->array)[(hash + 1)];
	if (item == NULL || ht == NULL || key == NULL)
	{
		return (0);
	}
	while ((ht->array)[hash] != NULL && (ht->array)[hash]->key != NULL)
	{
		hash = 0;

		hash %= size;
	}
	(ht->array)[hash] = item;
	return (1);
}
