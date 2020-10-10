#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * i_func - function to print integers
 * @args: string passed into function
 *
 * Return: number of chars printed
 */

int i_func(va_list args)
{
	int n;
	int count = 0;

	n = va_arg(args, int);
	print_number(n, &count);
	return (count);
}

/**
 * print_number - converts an integer into a string
 * @n: integer passed from d_func
 * @pcount: pointer to count
 *
 * Return: string
 */

void print_number(int n, int *pcount)
{
	unsigned int m;

	if (n >= 0)
	{
		m = n;
		if (n > 9)
		{
			print_number(m / 10, pcount);
		}
	}
	else
	{
		m = n * (-1);
		_putchar('-');
		(*pcount)++;
		if (n < -9)
		{
			print_number(m / 10, pcount);
		}
	}
	_putchar('0' + (m % 10));
	(*pcount)++;
}
