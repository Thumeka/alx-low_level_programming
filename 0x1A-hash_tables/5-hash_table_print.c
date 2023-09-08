#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int f = 1;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			if (!f)
				printf(", ");
			printf("'%lu': '%s': '%s'", i, node->key, node->value);
			f = 0;
			node = node->next;
		}
	}

	printf("}\n");
}
