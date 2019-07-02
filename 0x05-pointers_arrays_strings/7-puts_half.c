#include "holberton.h"

/**
 * puts_half - function that prints half of a string
 * followed by a new line
 *
 * @str: parameter defined in main
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int j;
	int l;

	while (str[i] != '\0')
	{
		i++;
	}
	l = i;

	if (l % 2 == 0)
	{
		for (j = l / 2; j < l; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (l - 1) / 2; j < l; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
