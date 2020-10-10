#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * d_func - function to print integers
 * @args: string passed into function
 *
 * Return: number of chars printed
 */

int d_func(va_list args)
{
	int n;
	int count = 0;

	n = va_arg(args, int);
	print_number(n, &count);
	return (count);
}
