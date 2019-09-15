#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given index
 * of a linked dlistint_t list
 * @h: double pointer, pointer to pointer to head node defined in main
 * @idx: index of the node where the insertion is made
 * @n: value to be staged at new node
 * Return: pointer to the new node inserted at index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp = NULL;
	dlistint_t *new = NULL;

	temp = *h;
	while (temp != NULL)
	{
		if (count != idx)
			temp = temp->next, count++;
		else
		{
			if (count == 0)
				new = add_dnodeint(h, n);
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (new == NULL)
					return (NULL);
				new->n = n;

				new->next = temp;
				new->prev = temp->prev;
				temp->prev = new;
				temp = new->prev;
				temp->next = new;
			}
			return (new);
		}
	}
	if (idx == count)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	return (NULL);
}
