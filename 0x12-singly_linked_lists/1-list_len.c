#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - function that prints all the elements of a list_t list
 * @h: pointer to the struct list_t
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = (*h).next;
	}
	return (count);
}
