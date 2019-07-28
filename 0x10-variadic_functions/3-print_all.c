#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * const char * const format = constant pointer to a constant variable
 * @format: variable, list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, j;
	char *ptr = "";

	var_t type[] = {
		{"c", c_char},
		{"i", i_integer},
		{"f", f_float},
		{"s", s_string},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (type[j].vartype)
		{
			if (format[i] == *type[j].vartype)
			{
				printf("%s", ptr);
				type[j].f(args);
				ptr = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * c_char - prints a char
 * @args: parameter passed from main
 *
 * Return: void
 */

void c_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * i_integer - prints an integer
 * @args: parameter passed from main
 *
 * Return: void
 */

void i_integer(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * f_float - prints a float
 * @args: parameter passed from main
 *
 * Return: void
 */

void f_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * s_string - prints a string
 * @args: parameter passed from main
 *
 * Return: void
 */

void s_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
