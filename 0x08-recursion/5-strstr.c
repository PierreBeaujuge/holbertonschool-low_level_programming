#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 *
 * @haystack: parameter defined in main, pointer to memory (string)
 * @needle: parameter defined in main, characters to be compared with s string
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int size = 0;
	char *ptr = haystack;
	char *tmp1 = needle;
	int i, j;

	while (*needle++)
		size++;
	needle = tmp1;

	while (*haystack)
	{
		needle = tmp1;
		i = 0;
		while (needle < tmp1 + size)
		{
			if (*haystack == *needle)
			{
				i++;
			}
			ptr = haystack;
			needle++;
			haystack++;
			for (j = 1; j < size; j++)
			{
				if (*haystack == *needle)
				{
					i++;
				}
				needle++;
				haystack++;
			}
		}
		if (i == size)
			return (ptr);
		haystack = ptr;
		haystack++;
	}
	return (NULL);
}
