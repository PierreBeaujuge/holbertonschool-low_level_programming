#include "holberton.h"

/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s: string to change
 *
 * @to: string that should be copied
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
