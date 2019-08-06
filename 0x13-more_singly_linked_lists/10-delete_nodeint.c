#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index index
 * of a listint_t linked list
 * @head: pointer to a listint_t struct
 * @index: the index of the node, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *prev;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i <= index - 1; i++)
	{
		prev = temp;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	prev->next = temp->next;
	free(temp);
	return (1);
}
