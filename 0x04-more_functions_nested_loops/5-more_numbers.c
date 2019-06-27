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
	int j;
	int firstDigit;
	int lastDigit;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			firstDigit = i / 10 + '0';
			lastDigit = i % 10 + '0';
			if (i > 9)
			{
			_putchar(firstDigit);
			}
			_putchar(lastDigit);
		}
		_putchar('\n');
		j++;
	}
}
