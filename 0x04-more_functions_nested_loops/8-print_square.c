#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: parameter hard-coded in main
 *
 * Return: void
 */

void print_square(int size)
{
	int i = 0;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		while (i < size)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
}
