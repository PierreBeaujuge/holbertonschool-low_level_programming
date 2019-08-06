#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * of a listint_t linked list
 * @head: pointer to a listint_t struct
 * @idx: the index of the node, starting at 0
 * @n: integer to be inserted with the new node
 *
 * Return: pointer to the struct listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	if ((idx == 0 && *head == NULL) || idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
