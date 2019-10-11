#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table from which the key/values are to be read
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
			printf("%i\n", (int)index);
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
