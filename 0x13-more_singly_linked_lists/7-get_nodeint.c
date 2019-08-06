#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: pointer to a listint_t struct
 * @index: the index of the node, starting at 0
 *
 * Return: pointer to the struct listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	if (index == 0)
		return (temp);
	for (i = 1; i <= index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
