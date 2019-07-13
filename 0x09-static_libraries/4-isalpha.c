#include "holberton.h"

/**
 * _isalpha - checks for lowercase character
 *
 * @c: parameter is hard-coded in main function
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	int i;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
