#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of array
 * Return: pointer
 *
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int j;
	hash_table_t *hash_t;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_t->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		hash_t->array[j] = NULL;
	return (hash_t);
}
