#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key to be added to the hash table
 * @value: corresponding value to be added to the hash table
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
/*		if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)*/
		if (strcmp(temp->key, key) == 0)
		{
			printf("updated node at index: %i\n", (int)index), free(temp->value), temp->value = strdup(value);
			printf("%s: %s\n", temp->key, temp->value);
			return (1);
		}
		temp = temp->next;
	}
	/* else */
	/* { */
		new_node = malloc(sizeof(struct hash_node_s));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;

		if (ht->array[index] == NULL)
		{
	        	printf("inserted new_node at index: %i\n", (int)index), ht->array[index] = new_node;
			printf("%s: %s\n", new_node->key, new_node->value);
		}
		else
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
			printf("inserted new_node after another one at index: %i\n", (int)index);
			printf("%s: %s\n", new_node->key, new_node->value);
	        }
	/* } */
	return (1);
}
