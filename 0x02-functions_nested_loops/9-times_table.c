#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int n;
	int firstDigit;
	int lastDigit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (n < 10)
			{
				if (j != 0)
				{
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(n + '0');
				if (j != 9)
				{
				_putchar(',');
				}
			}
			else
			{
				lastDigit = n % 10;
				while (n >= 10)
				{
					n = n / 10;
				}
				firstDigit = n;
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(firstDigit + '0');
				_putchar(lastDigit + '0');
				if (j != 9)
				{
				_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
