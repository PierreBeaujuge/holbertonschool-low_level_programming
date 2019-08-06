#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list,
 * and returns the head node’s data (n)
 * @head: double pointer to the struct listint_t
 *
 * Return: void
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	num = temp->n;
	free(temp);
	return (num);
}
