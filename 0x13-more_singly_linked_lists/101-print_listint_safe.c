#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to the struct listint_t
 *
 * Return: size_t, number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;

	for (count = 0; head != NULL; count++)
	{
		printf("[%p] %i\n", (void *)head, head->n);
		head = head->next;
		if (...)
		     {
			     printf("-> [%p] %i\n", (void *)head, head->n);
			     break;
		     }
	}
	return (count);
}
