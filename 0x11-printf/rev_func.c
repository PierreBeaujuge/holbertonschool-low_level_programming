#include "holberton.h"

/**
 * rev_func - function that prints a string, in reverse
 * @args: pointer to string
 *
 * Return: counter
 */

int rev_func(va_list args)
{
	int a, b;
	char *s;

	s = va_arg(args, char *);
	for (a = 0; s[a]; a++)
		;
	b = a;
	for (; --a >= 0;)
		_putchar(s[a]);
	return (b);
}
