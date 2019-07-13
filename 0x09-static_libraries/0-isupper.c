#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: parameter hard-coded in main
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
	{
		i = 1;
		return (i);
	}
	else
	{
		i = 0;
		return (i);
	}
}
