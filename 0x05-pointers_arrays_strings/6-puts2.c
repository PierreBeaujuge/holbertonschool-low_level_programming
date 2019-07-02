#include "holberton.h"

/**
 * puts2 - function that prints one char out of 2 of a string
 * followed by a new line
 *
 * @str: parameter defined in main
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;
	int l;

	while (str[i] != '\0')
	{
		i++;
	}
	l = i - 1;

	while (j < l)
	{
		if (str[j] % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
