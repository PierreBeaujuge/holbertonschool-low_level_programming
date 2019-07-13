#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: parameter defined in main
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
