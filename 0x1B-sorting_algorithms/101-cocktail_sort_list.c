#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * cocktail_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Cocktail shaker sort algorithm
 * @list: double pointer to the doubly linked list
 * Return: void
 *
 * Compile with:
 * gcc -Wall -Wextra -Werror -pedantic 101-main.c 101-cocktail_sort_list.c
 * print_list.c -o cocktail
 */

void cocktail_sort_list(listint_t **list)
{
	listint_t *temp = NULL/*, *copy = NULL*/, *save = NULL;
	int flag = 0;

	if (!list || !(*list) || !(*list)->next)
		return;
	while (1)
	{
		flag = 0, temp = (*list)->next;
		while (temp != NULL)
		{
			save = temp;
			flag = way_forward(list, &temp, flag);
		}
		if (flag == 0)
			return;
		flag = 0, temp = save;
		while (temp != NULL)
		{
			flag = way_backward(list, &temp, flag);
			if (flag == -1)
				return;
			if (temp->prev == NULL)
				break;
		}
		if (flag == 0)
			return;
	}
}

/**
 * way_forward - helper function for cocktail_sort_list that iterates forward
 * @list: double pointer to the doubly linked list
 * @temp: double pointer to the temp pointer defined in cocktail_sort_list
 * @flag: flag passed from cocktail_sort_list
 * Return: flag value (0 or 1)
 */

int way_forward(listint_t **list, listint_t **temp, int flag)
{
	listint_t *copy = NULL;

	if ((*temp)->n >= (*temp)->prev->n)
		*temp = (*temp)->next;
	else
	{
		copy = (*temp)->next;
		swap_nodes(*temp);
		if ((*temp)->prev == NULL)
			*list = *temp;
		*temp = copy;
		print_list(*list);
		flag = 1;
	}
	return (flag);
}

/**
 * way_backward - helper function for cocktail_sort_list that iterates backward
 * @list: double pointer to the doubly linked list
 * @temp: double pointer to the temp pointer defined in cocktail_sort_list
 * @flag: flag passed from cocktail_sort_list
 * Return: flag value (0 or 1)
 */

int way_backward(listint_t **list, listint_t **temp, int flag)
{
	if ((*temp)->prev == NULL)
	{
		flag = -1;
		return (flag);
	}
	if ((*temp)->prev->n <= (*temp)->n)
		*temp = (*temp)->prev;
	else
	{
		swap_nodes(*temp);
		if ((*temp)->prev == NULL)
			*list = *temp;
		print_list(*list);
		flag = 1;
	}
	return (flag);
}

/**
 * swap_nodes - function that swaps two nodes
 * @node: pointer to the node to be swapped with the previous node
 * Return: void
 */

void swap_nodes(listint_t *node)
{
	listint_t *prev = NULL;

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
