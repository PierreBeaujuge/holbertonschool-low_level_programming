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
		count++;
		diff = current - current->next;
		printf("[%p] %i\n", (void *)current, current->n);
		if (diff > 0)
		{
			current = current->next;
		}
		else
		{
			printf("-> [%p] %i\n", (void *)current->next, current->next->n);
			break;
		}
	}
	return (count);
}
