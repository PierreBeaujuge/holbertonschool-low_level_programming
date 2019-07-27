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
	unsigned int i, n;
	char *str;

	n = 0;
	while (format[n])
		n++;
	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		    format[i] == 's')
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				helper(str);
				break;
			}
			if (i != n - 1)
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/*
 * if (n == 0)
 * return;
 */

/**
 * helper - check for NULL strings
 * @str: pointer to string
 *
 * Return: void
 */

void helper(char *str)
{
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
