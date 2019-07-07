#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: parameter defined in main
 * @src: parameter defined in main
 * @n: parameter defined in main
 *
 * Return: memory address of function (string)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp1 = dest;
	char *tmp2 = src;

	while (*dest != '\0')
	{
		dest++;
	}
	while (src < tmp2 + n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest++ = '\0';
	dest = tmp1;
	return (dest);
}
