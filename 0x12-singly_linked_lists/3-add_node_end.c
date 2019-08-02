#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to the pointer to the struct named head
 * @str: pointer to the string str
 *
 * Return: pointer to the struct list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp1;
	list_t *temp2;

	temp1 = malloc(sizeof(list_t));
	if (temp1 == NULL)
	{
		free(temp1);
		return (NULL);
	}
	temp1->str = _strdup(str);
	temp1->len = _strlen(str);
	temp1->next = NULL;
	if (*head == NULL)
		*head = temp1;
	else
	{
		temp2 = *head;
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = temp1;
	}
	return (temp1);
}

/**
 * _strlen - function that returns the length of a string
 *
 * @s: parameter defined in main
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: string of chars
 *
 * Return: address of the newly allocated memory
 */

char *_strdup(const char *str)
{
	unsigned int len;
	unsigned int i, j;
	char *str_copy;
	const char *tmp = str;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*str++)
		i++;
	len = i;
	str = tmp;

	str_copy = malloc(len * sizeof(char) + 1);
	if (str_copy == NULL)
		return (NULL);

	j = 0;
	while (j < len)
	{
		str_copy[j] = str[j];
		j++;
	}
	str_copy[j] = '\0';
	return (str_copy);
}
