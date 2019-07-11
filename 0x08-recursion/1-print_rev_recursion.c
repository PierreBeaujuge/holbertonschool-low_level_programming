#include "holberton.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 * @s: parameter defined in main, pointer to memory (string)
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
