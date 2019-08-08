#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to the struct listint_t
 *
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow;
	listint_t *fast;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head;

	while (fast != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
