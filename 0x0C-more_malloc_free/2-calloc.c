#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: size of the memory space to allocate in bytes
 * @size: size of type
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, size * nmemb);
	return (ptr);
}

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: parameter defined in main, pointer to memory area
 * @b: parameter defined in main, constant byte
 * @n: parameter defined in main, number of bytes to be filled
 *
 * Return: memory address of function (memory area)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *tmp = s;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	s = tmp;
	return (s);
}
