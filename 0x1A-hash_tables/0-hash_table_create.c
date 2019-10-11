#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i = 0;

	if (!size)
		return (NULL);
	hash_table = malloc(sizeof(struct hash_table_s));
	if (hash_table == NULL)
		return (NULL);
	hash_table->array = malloc(sizeof(struct hash_node_s *) * size);
	if (hash_table->array == NULL)
		return (NULL);
	hash_table->size = size;
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
