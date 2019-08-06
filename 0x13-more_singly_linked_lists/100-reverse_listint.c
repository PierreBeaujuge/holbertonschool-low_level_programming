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
	listint_t *prev;
	listint_t *current;
	listint_t *next;

	if (*head == NULL)
		return (NULL);
	while (current != NULL)
		current = current->next;


	temp = *head;
	while (temp != NULL)
	{
		prev = temp;
		temp = temp->next;
	}
	new_head = temp;
	while (temp != *head)
	{
		temp->next = prev;
		temp = prev;
	}
	temp->next = NULL;
	return (new_head);
}
