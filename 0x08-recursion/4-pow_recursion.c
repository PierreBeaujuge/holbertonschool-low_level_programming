#include "holberton.h"

/**
 * _pow_recursion - function that returns x raised to the power of y
 *
 * @x: parameter defined in main, integer
 * @y: parameter defined in main, exponent
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
