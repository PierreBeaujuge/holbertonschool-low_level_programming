#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int k;
	int j = 0;

	while (j < 10)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
		i = '1';
			for (k = '0'; k <= '4'; k++)
			{
				_putchar(i);
				_putchar(k);
			}
		_putchar('\n');
		j++;
	}
}
