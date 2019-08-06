#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: double pointer to a listint_t struct
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);

	current = *head;
	while (current->next != NULL)
	{
		next = current->next;
		current->next = next->next;
		next->next = *head;
		*head = next;
	}
	return (*head);
}

/*
 *	listint_t *prev;
 *	listint_t *current;
 *	listint_t *next;
 *
 *	if (*head == NULL)
 *		return (NULL);
 *
 *	current = *head;
 *	while (current != NULL)
 *	{
 *		next = current->next;
 *		current->next = prev;
 *		prev = current;
 *		current = next;
 *	}
 *	*head = prev;
 *	return (*head);
 */
