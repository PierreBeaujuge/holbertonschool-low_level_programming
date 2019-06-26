#include "holberton.h"

/**
 * print_times_table - prints n times table, starting with 0
 *
 * @n: parameter hard-coded in main
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i;
	int j;
	int m;
	int firstDigit;
	int lastDigit;
	int middleDigit;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if (m < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(m + '0');
					if (j != n)
					{
						_putchar(',');
					}
				}
				else
				{
					if (m >= 10 && m <= 99)
					{
					lastDigit = m % 10;
					while (m >= 10)
					{
						m = m / 10;
					}
					firstDigit = m;
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(firstDigit + '0');
					_putchar(lastDigit + '0');
					if (j != n)
					{
						_putchar(',');
					}
					}
					else
					{
						lastDigit = m % 10;
						middleDigit = (m / 10) % 10;
						while (m >= 10)
						{
							m = m / 10;
						}
						firstDigit = m;
						if (j != 0)
						{
							_putchar(' ');
						}
						_putchar(firstDigit + '0');
						_putchar(middleDigit + '0');
						_putchar(lastDigit + '0');
						if (j != n)
						{
							_putchar(',');
						}
					}
				}
			}
			_putchar('\n');
		}
	}
}
