#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - function that concatenates two strings
 *
 * @dest: parameter defined in main
 * @src: parameter defined in main
 * @n: parameter defined in main
 *
 * Return: memory address of function (string)
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = src;

	while (src < tmp + n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest++ = '\0';
	dest = tmp;
	return (dest);
}
