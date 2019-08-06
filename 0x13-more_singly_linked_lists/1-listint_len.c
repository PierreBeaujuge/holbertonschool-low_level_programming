#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: pointer to the struct listint_t
 *
 * Return: size_t, number of nodes in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = (*h).next;
	}
	return (count);
}
