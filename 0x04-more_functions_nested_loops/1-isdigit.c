#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: parameter hard-coded in main
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	int i;

	if (c >= '0' && c <= '9')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
