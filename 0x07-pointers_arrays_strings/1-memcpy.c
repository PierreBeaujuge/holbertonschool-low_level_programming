#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 *
 * @dest: parameter defined in main, pointer to memory area (dest)
 * @src: parameter defined in main, pointer to another memory area (src)
 * @n: parameter defined in main, number of bytes to be copied from src
 *
 * Return: memory address of function (memory area)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *tmp = dest;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = tmp;
	return (dest);
}
