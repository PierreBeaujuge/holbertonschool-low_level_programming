#include "holberton.h"

/**
 * _abs - prints the absolute value of an integer
 *
 * @n: is hard-coded in main function
 *
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
