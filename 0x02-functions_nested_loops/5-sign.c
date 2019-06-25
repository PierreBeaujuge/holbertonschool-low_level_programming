#include "holberton.h"

/**
 * print_sign - prints the sign of a function
 *
 * @n: parameter is hard-coded in main function
 *
 * Return: 0 or 1 or -1
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		i = -1;
		_putchar('-');
	}
	else
	{
		i = 0;
		_putchar('0');
	}
	return (i);
}
