#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp, *prev = NULL;

	if (!ht)
		return;

	for (; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			free(temp->key);
			free(temp->value);
			prev = temp;
			temp = temp->next;
			free(prev);
		}
		free(temp);
	}
	free(ht->array);
	free(ht);
}
