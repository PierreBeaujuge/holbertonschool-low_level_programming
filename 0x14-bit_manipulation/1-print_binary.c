#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		recursion_print_binary(n);
}

/**
 * recursion_print_binary - helper function that runs the if condition
 * @n: number
 *
 * Return: void
 */

void recursion_print_binary(unsigned long int n)
{
	unsigned long int temp = 0, remainder = 0;

	if (n != 0)
	{
		temp = n;
		n = temp >> 1;
		remainder = temp - (2 * n);
		recursion_print_binary(n);
		_putchar(remainder + '0');
	}
}
