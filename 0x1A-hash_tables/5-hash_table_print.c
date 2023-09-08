#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *node;
	char *comma = "";

	if (!ht == !ht->array)
		return;

	putchar('{');
	while (j < ht->size)
	{
		node = ((ht->array)[j]);
		while (node)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		j++;

	}
	puts("}");
}
