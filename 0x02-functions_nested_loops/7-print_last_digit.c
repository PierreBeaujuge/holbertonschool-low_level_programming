#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: is hard-coded in main function
 *
 * Return: n
 */

int print_last_digit(int n)
{
	int i;

	if (n >= 0)
	{
		i = n % 10;
		_putchar(i + '0');
	}
	else
	{
		i = n % 10;
		i = -i;
		_putchar(i + '0');
	}
	return (i);
}
