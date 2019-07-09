#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: parameter defined in main, pointer to memory (string)
 * @accept: parameter defined in main, characters to be compared with s string
 *
 * Return: integer, number of bytes common to the two strings
 */

unsigned int _strspn(char *s, char *accept)
{
	int size = 0;
	unsigned int bytes = 0;
	char *tmp = accept;

	while (*accept++)
		size++;
	accept = tmp;

	while (*s)
	{
		accept = tmp;
		while (accept < tmp + size)
		{
			if (*s == *accept)
				bytes++;
			accept++;
			if (*s != *accept)
				break;
		}
		s++;
	}
	return (bytes);
}