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
	int diff = 0;
	size_t count;
	const listint_t *current;

	current = head;

	count = 0;
	while (current != NULL)
	{
		diff = current - current->next;
		if (diff > 0)
		{
			printf("[%p] %i\n", (void *)current, current->n);
			current = current->next;
		}
		else
		{
			printf("[%p] %i\n", (void *)current, current->n);
			printf("-> [%p] %i\n", (void *)current->next, current->next->n);
			break;
		}
		count++;
	}
	return (count);
}
