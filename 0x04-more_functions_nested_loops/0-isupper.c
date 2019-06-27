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

	if (c >= 'a' && c <= 'z')
	{
		i = 0;
	}
	if (c >= 'A' && c <= 'Z')
	{
		i = 1;
	}
		return (i);
}
