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
	int l;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	l = i;

	while (s--)
	{
		l--;
		_putchar(*s);
		if (l == 0)
		{
			break;
		}
	}
	_putchar('\n');
}
