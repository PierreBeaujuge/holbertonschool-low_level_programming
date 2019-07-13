#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: parameter defined in main, pointer to memory (string)
 * @accept: parameter defined in main, characters to be compared with s string
 *
 * Return: integer, pointer to the first byte common to the two strings
 */

char *_strpbrk(char *s, char *accept)
{
	int size = 0;
	char *ptr = s;
	char *tmp = accept;
	int i;

	while (*accept++)
		size++;
	accept = tmp;

	while (*s)
	{
		accept = tmp;
		i = 0;
		while (accept < tmp + size)
		{
			if (*s == *accept)
				ptr = s, i++;
			accept++;
		}
		if (i == 1)
			return (ptr);
		s++;
	}
	return (NULL);
}
