#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 *
 * @s: parameter defined in main, pointer to memory (string)
 * @c: parameter defined in main, character to be located
 *
 * Return: memory address of function (memory area)
 */

char *_strchr(char *s, char c)
{
	char *pc = &c;

	while (*s != '\0')
	{
		if (*s == *pc)
			return (s);
		s++;
	}
	return (s);
}
