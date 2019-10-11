#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table from which the key/values are to be read
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, counter1 = 0, counter2 = 0;
	hash_node_t *temp = NULL;

	if (!ht)
		return;

	for (; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			counter1++;
			temp = temp->next;
		}
	}

	index = 0;
	printf("{");
	for (; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			counter2++;
			printf("'%s': '%s'", temp->key, temp->value);
			if (counter2 != counter1)
				printf(", ");
			temp = temp->next;
		}
	}
	printf("}\n");
}
