#include "holberton.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: parameter defined in main, integer
 *
 * Return: -1, 0, 1 or i (sqrt of n found in tmp1)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (tmp1(n, 1));
}

/**
 * tmp1 - subfunction for _sqrt_recursion
 *
 * @n: integer, from which sqrt is seeked
 * @i: sqrt of integer (to be incremented)
 *
 * Return: -1 or i;
 */

int tmp1(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (tmp1(n, i + 1));
	else
		return (-1);
}
