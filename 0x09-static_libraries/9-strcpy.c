#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: parameter defined in main
 * @src: parameter defined in main
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (tmp);
/*
 *	int i = 0;
 *
 *	while (src[i] != '\0')
 *	{
 *		dest[i] = src[i];
 *		i++;
 *	}
 *	dest[i] = '\0';
 *	return (dest);
 */
}
