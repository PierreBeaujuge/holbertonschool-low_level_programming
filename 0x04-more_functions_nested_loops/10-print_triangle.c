#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: parameter hard-coded in main
 *
 * Return: void
 */

void print_triangle(int size)
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
				if (j < (size - i))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
			i++;
		}
}
