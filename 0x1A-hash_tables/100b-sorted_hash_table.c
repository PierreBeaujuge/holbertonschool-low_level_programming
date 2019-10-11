#include "hash_tables.h"


/**
 * shash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to the hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
        shash_table_t *hash_table = NULL;
        unsigned long int i = 0;

        if (!size)
                return (NULL);
        hash_table = malloc(sizeof(struct shash_table_s));
        if (hash_table == NULL)
                return (NULL);
        hash_table->array = malloc(sizeof(struct shash_node_s *) * size);
        if (hash_table->array == NULL)
                return (NULL);
        hash_table->size = size;
        for (i = 0; i < size; i++)
                hash_table->array[i] = NULL;
	hash_table->shead = NULL;
	hash_table->stail = NULL;
        return (hash_table);
}

/**
 * shash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key to be added to the hash table
 * @value: corresponding value to be added to the hash table
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
        shash_node_t *new_node, *temp = NULL;
        unsigned long int index = 0;

	printf("entering shash_table_set function\n");
        if (!ht || !key || !value)
                return (0);

        index = key_index((const unsigned char *)key, ht->size);

        temp = ht->array[index];
        while (temp != NULL)
        {
                if (strcmp(temp->key, key) == 0)
                {
                        free(temp->value), temp->value = strdup(value);
                        return (1);
                }
                temp = temp->next;
        }
	printf("before malloc in shash_table_set function\n");
        new_node = malloc(sizeof(struct shash_node_s));
        if (new_node == NULL)
                return (0);
        new_node->key = strdup(key);
        new_node->value = strdup(value);
        new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;
	printf("after malloc in shash_table_set function\n");

	if (ht->shead == NULL && ht->stail == NULL)
	{
		printf("before the first node is inserted\n");
		ht->shead = new_node, ht->stail = new_node;
		ht->array[index] = new_node;
		printf("the first node was inserted\n");
		return (1);
	}
        if (ht->array[index] == NULL)
	{
		printf("trying to add another node #1-1\n");
                ht->array[index] = new_node;
		printf("trying to add another node #1-2\n");
                connect_nodes(ht, new_node);
		printf("trying to add another node #1-3\n");
	}
        else
        {
                new_node->next = ht->array[index];
                ht->array[index] = new_node;
		printf("trying to add another node #2\n");
                connect_nodes(ht, new_node);
        }
        return (1);
}

/**
 * connect_nodes - function that checks order based on key alphabet
 * prior to connecting nodes across (singly-linked) lists, and then
 * connects the nodes accordingly, making a doubly-linked list of
 * (alphabetically ordered) nodes
 * @ht: hash table
 * @new_node: new_node to be connected via double links across lists
 * Return: void
 */

void connect_nodes(shash_table_t *ht, shash_node_t *new_node)
{
	int i = 0;
        shash_node_t *temp = NULL;

	printf("entering connect_nodes\n");
	temp = ht->shead;
/* 	if (temp == NULL) */
/* 	{ */
/* /\*		ht->shead = new_node;*\/ */
/* 		return; */
/* 	} */
	printf("just before while loop\n");
	while (temp->snext != NULL)
	{
		printf("inside while loop\n");
		for (i = 0; new_node->key[i] != '\0' && temp->key[i] != '\0'; i++)
		{
			if (new_node->key[i] < temp->key[i])
			{
				if (temp == ht->shead)
				{
					printf("process #1-1 initiated\n");
					new_node->snext = temp;
					temp->sprev = new_node;
					ht->shead = new_node;
					printf("process #1-1 completed\n");
					return;
				}
				printf("process #1-2 initiated\n");
				new_node->snext = temp;
				temp->sprev->snext = new_node;
				new_node->sprev = temp->sprev;
				temp->sprev = new_node;
/*				ht->shead = new_node;*/
				printf("process #1-2 completed\n");
				return;
			}
		}
		temp = temp->snext;
	}
	for (i = 0; new_node->key[i] != '\0' && temp->key[i] != '\0'; i++)
	{
		printf("inside for loop\n");
		if (new_node->key[i] < temp->key[i])
		{
			if (temp == ht->shead)
			{
				printf("process #2 initiated\n");
				new_node->snext = temp;
				temp->sprev = new_node;
				ht->shead = new_node;
				printf("process #2 completed\n");
				return;
			}
			printf("process #2 initiated\n");
			new_node->snext = temp;
			temp->sprev->snext = new_node;
			new_node->sprev = temp->sprev;
			temp->sprev = new_node;
			ht->shead = new_node;
			printf("process #2 completed\n");
			return;
		}
	}
	printf("process #3 initiated\n");
	temp->snext = new_node;
	new_node->sprev = temp;
	ht->stail = new_node;
	return;

        /* for (; index < ht->size; index++) */
        /* { */
        /*         temp = ht->array[index]; */
	/* 	if (temp == NULL) */
	/* 		continue; */
        /*         while (temp != NULL) */
	/* 	{ */
	/* 		for (i = 0; new_node->key[i] != '\0' && temp->key[i] != '\0'; i++) */
	/* 		{ */
	/* 			if (new_node->key[i] < temp->key[i]) */
	/* 				return (temp); */
	/* 		} */
        /*                 temp = temp->next; */
	/* 	} */
        /* } */
	/* return (); */
}

/**
 * shash_table_get - function that retrieves a value associated with a key
 * @ht: hash table you want to add or update the key/value to
 * @key: key to be added to the hash table
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
        unsigned long int index = 0;
        shash_node_t *temp = NULL;

        if (!ht || !key)
                return (NULL);
        index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		temp = temp->next;
	}
        return (NULL);
}

/**
 * shash_table_print - function that prints a hash table
 * @ht: hash table from which the key/values are to be read
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
        unsigned long int counter1 = 0, counter2 = 0;
        shash_node_t *temp = NULL;

        if (!ht)
                return;

	temp = ht->shead;
	while (temp != NULL)
	{
		counter1++;
		temp = temp->snext;
	}

        printf("{");
	temp = ht->shead;
	while (temp != NULL)
	{
		counter2++;
		printf("'%s': '%s'", temp->key, temp->value);
		if (counter2 != counter1)
			printf(", ");
		temp = temp->snext;
	}
	printf("}\n");
	printf("SUCCESS\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
        unsigned long int counter1 = 0, counter2 = 0;
        shash_node_t *temp = NULL;

        if (!ht)
                return;

        temp = ht->stail;
        while (temp != NULL)
        {
                counter1++;
                temp = temp->sprev;
        }

        printf("{");
	temp = ht->stail;
        while (temp != NULL)
        {
                counter2++;
                printf("'%s': '%s'", temp->key, temp->value);
                if (counter2 != counter1)
                        printf(", ");
                temp = temp->sprev;
        }
        printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	(void)ht;
}
