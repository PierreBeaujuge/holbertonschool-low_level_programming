#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - function that produces output according to a format
 * @format: type of argument passed to function
 *
 * Return: k, number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, j, k, count;
	var_t type[] = {
		{"c", c_func}, {"s", s_func}, {"i", i_func}, {"%", perc_func},
		{"d", d_func},	{"b", b_func},	{"r", rev_func}, {"R", rot_func},
		{NULL, NULL},
	};

	va_start(args, format);
	i = 0, count = 0, k = 0;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format && format[i])
	{
		if (format[i] != '%')
			_putchar(format[i]), k++;
		else
		{
			j = 0;
			while (type[j].vartype)
			{
				if (format[i + 1] == *type[j].vartype)
				{
					count += (type[j].f)(args), i++;
					break;
				}
				j++;
			}
			if (type[j].vartype == NULL)
				count += 1, _putchar('%');
		}
		i++;
	}
	k += count;
	va_end(args);
	return (k);
}
