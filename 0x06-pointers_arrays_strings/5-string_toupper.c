#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase
 *
 * @s: parameter defined in main
 *
 * Return: memory address of function (string)
 */

char *string_toupper(char *s)
{
	char *tmp = s;

	while (*s != '\0')
	{
		for (; *s >= 'a' && *s <= 'z'; )
		{
			*s = *s - 32;
		}
		s++;
	}
	s = tmp;
	return (s);
}
