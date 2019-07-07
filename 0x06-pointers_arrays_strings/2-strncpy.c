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

	char *tmp1 = dest;
	char *tmp2 = src;

	while (src < tmp2 + n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	while (src < tmp2 + n)
	{
		*dest = '\0';
		dest++;
		src++;
	}
	dest = tmp1;
	src = tmp2;

/*
 *	int i;
 *	char *tmp = dest;
 *
 *	for (i = 0; i < n && *src != '\0'; i++)
 *		*dest++ = *src++;
 *
 *	for ( ; i < n; i++)
 *		*dest++ = '\0';
 *
 *	dest = tmp;
 */

	return (dest);
}
