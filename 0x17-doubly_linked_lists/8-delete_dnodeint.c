#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - function that deletes the node at index index
 * of a linked dlistint_t list
 * @head: double pointer, pointer to pointer to head node defined in main
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = NULL, *delete = NULL;

	if (!head || !(*head))
		return (-1);
	temp = *head;
	while (temp != NULL)
	{
		if (count != index)
			temp = temp->next, count++;
		else
		{
			if (index == 0 && (*head)->next == NULL)
				*head = NULL, free(temp);
			else if (index == 0 && (*head)->next != NULL)
			{
				delete = *head, *head = (*head)->next;
				delete->next = NULL, (*head)->prev = NULL;
				free(delete);
			}
			else if (temp->next == NULL)
			{
				delete = temp, temp = temp->prev;
				delete->prev = NULL;
				temp->next = NULL;
				free(delete);
			}
			else
			{
				delete = temp, temp = temp->prev;
				temp->next = temp->next->next;
				temp->next->prev = temp;
				delete->prev = NULL, delete->next = NULL, free(delete);
			}
			return (1);
		}
	}
	return (-1);
}
