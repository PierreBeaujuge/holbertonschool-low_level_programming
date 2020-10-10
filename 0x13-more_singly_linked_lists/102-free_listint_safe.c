#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: double pointer to the struct listint_t
 *
 * Return: size_t, number of nodes in the linked list
 */

size_t free_listint_safe(listint_t **h)
{
	int diff = 0;
	size_t count;
	listint_t *temp;
	listint_t *current;

	if (h == NULL)
                return (0);
        if (*h == NULL)
                return (0);

	current = *h;

	count = 0;
	while (current != NULL)
	{
		count++;
		diff = current - current->next;
		if (diff > 0)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		else
			break;
	}
	*head = NULL;
	return (count);
}
