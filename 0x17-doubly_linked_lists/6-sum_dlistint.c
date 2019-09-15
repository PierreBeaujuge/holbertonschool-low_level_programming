#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a linked dlistint_t list
 * @head: pointer to head node passed from main
 * Return: sum of all the data (n) of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *temp = NULL;

	temp = head;
	while (temp != NULL)
	{
		result += temp->n;
		temp = temp->next;
	}
	return (result);
}
