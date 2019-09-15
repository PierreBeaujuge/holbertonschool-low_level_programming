#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_dlistint - function that free a dlistint_t list
 * @head: pointer to head node passed from main
 * Return: n/a
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	dlistint_t *prev = NULL;

	if (!head)
		return;

	temp = head;
	while (temp != NULL)
	{
		prev = temp;
		temp = temp->next;
		free(prev);
	}
}
