#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        unsigned long int l = key_index(key, 1024);
        unsigned long int loop = 0;
        hash_table_t *me = ht;
        if (ht == NULL)
        {
                return (0);
        }
        else
        {
                while (loop++ <= l)
                {
                        me = me -> next;
                }
                if (key_index(me -> key, 1024) == l)
                {
                        
                }
                me -> key = key;
                me -> value = value;
        }
}
