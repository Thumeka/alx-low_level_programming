#include "hash_tables.h"

/**
 * hash_table_get - gets the value with key
 * @ht: hash table
 * @key: the key
 * Return: NULL 
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht)
	{
		index = key_index((const unsigned char *)key, ht->size);
		if (ht->array[index])
		{
			node = ht->array[index];
			while (node)
			{
				if (strcmp(node->key, (char *) == 0)
						return (node->value);
					node = node->next;
			}
		}
	}
	return (NULL);
}
