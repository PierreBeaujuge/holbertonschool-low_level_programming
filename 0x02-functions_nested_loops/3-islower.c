#include "holberton.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: parameter hard-coded in main function
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
	{
		i = 0;
	}
	else if (c >= 'a' && c <= 'z')
	{
		i = 1;
	}
	return (i);
}
