#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: double pointer to the doubly linked list
 * Return: void
 *
 * Compile with:
 * gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c
 * print_list.c -o insertion
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL, *copy = NULL;

	if (!list || !(*list) || !(*list)->next)
		return;
	temp = (*list)->next;
	while (temp != NULL)
	{
		if (temp->n >= temp->prev->n)
			temp = temp->next;
		else
		{
			copy = temp->next;
			swap_nodes(temp);
			if (temp->prev == NULL)
				*list = temp, temp = copy;
			print_list(*list);
			if (temp == NULL)
				return;
			while (temp->prev != NULL)
			{
				if (temp->n < temp->prev->n)
				{
					swap_nodes(temp);
					if (temp->prev == NULL)
						*list = temp, temp = copy;
					print_list(*list);
					if (temp == NULL)
						return;
				}
				else
				{
					temp = copy;
					break;
				}
			}
		}
	}
}

/**
 * swap_nodes - function that swaps two nodes
 * @node: pointer to the node to be swapped with the previous node
 * Return: void
 */

void swap_nodes(listint_t *node)
{
	listint_t *prev = NULL;

	if (!node)
		return;
	if (node->prev == NULL)
		return;
	prev = node->prev;
	if (node->next == NULL)
	{
		node->prev->next = NULL;
		node->prev = NULL;
	}
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
		node->next = NULL;
		node->prev = NULL;
	}
	if (prev->prev == NULL)
	{
		node->next = prev;
		prev->prev = node;
	}
	else
	{
		node->next = prev;
		node->prev = prev->prev;
		prev->prev->next = node;
		prev->prev = node;
	}
}
