#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	unsigned long int size;
	unsigned int k;
	hash_node_t *node;

	j = 0;
	k = 0;

	if (ht == NULL)
		return;

	size = ht->size;
	printf("{");

	for (j = 0; j < size; j++)
	{
		if (ht->array[j] != NULL)
		{
			node = ht->array[j];
			while (node)
			{
				if (k > 0)
					printf(", ");
				printf(" '%s': ", node->key);
				printf(" '%s'", node->value);
				k++;
				node = node->next;
			}
		}
	}
	printf("}\n");
}
