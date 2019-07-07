#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 *
 * @s1: parameter defined in main
 * @s2: parameter defined in main
 *
 * Return: 15 or -15 or 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (*s1 != '\0')
	{
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		s2++;
		j++;
	}
	if (i > j)
		return (15);
	else if (j > i)
		return (-15);
	else
		return (0);
}
