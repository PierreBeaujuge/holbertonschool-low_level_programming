#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h: pointer to node passed from main
 * Return: number of elements (nodes) in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = NULL;

	temp = h;
	while (temp != NULL)
		temp = temp->next, count++;
	return (count);
}
