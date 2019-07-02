#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * followed by a new line
 *
 * @s: useful parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int l = 0;
	int j;
	char *begin_ptr, *end_ptr, tmp;

	begin_ptr = s;
	end_ptr = s;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	l = i;

	for (j = 0; j < l - 1; j++)
		end_ptr++;

	for (j = 0; j < l / 2; j++)
	{
		tmp = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = tmp;
		begin_ptr++;
		end_ptr--;
	}
}
