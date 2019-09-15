#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a linked dlistint_t list
 * @head: pointer to head node passed from main
 * @index: index of node to be returned
 * Return: pointer to node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = NULL;

	temp = head;
	while (temp != NULL)
	{
		if (count != index)
			temp = temp->next, count++;
		else
			return (temp);
	}
	return (NULL);
}
