#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse
 * followed by a new line
 *
 * @s: useful parameter
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
/*
 *	int i;
 */
	int l;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
/*
 *	for (i = 0; s[i] != '\0'; i++)
 *	{
 *		l++;
 *	}
 */
	for (j = l; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
