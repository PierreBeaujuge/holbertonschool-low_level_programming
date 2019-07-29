#include "holberton.h"

/**
 * print_number - converts an integer into a string
 * @n: integer passed from main
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int m;

	if (n > 9)
	{
		print_number(n / 10);
		_putchar('0' + (n % 10));
	}
	else if (n > -1)
	{
		_putchar('0' + n);
	}
	else if (n > -10)
	{
		_putchar('-');
		n = n * (-1);
		_putchar('0' + n);
	}
	else
	{
		_putchar('-');
		n = n * (-1);
		m = (unsigned int) n;
		print_number(m / 10);
		_putchar('0' + (m % 10));
	}
}
