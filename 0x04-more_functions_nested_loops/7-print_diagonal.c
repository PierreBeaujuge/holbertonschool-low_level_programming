#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: parameter hard-coded in main
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		while (i < n)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
}
