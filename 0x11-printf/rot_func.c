#include "holberton.h"
#include <stdio.h>

/**
 * rot_func - function that encodes a string using rot13
 *
 * @args: string passed from main
 *
 * Return: counter.
 */

int rot_func(va_list args)
{
	int i, l;
	char str1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (l = 0; str1[l]; l++)
		{
			if (s[i] == str1[l])
			{
				s[i] = str2[l];
					_putchar(s[i]);
					break;
			}
			if (!str1[l])
				_putchar(s[i]);
		}
	}
	return (i);
}
