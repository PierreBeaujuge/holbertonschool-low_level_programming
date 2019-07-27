#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: pointer to the separator
 * @n: const unsigned int passed from main,
 * count argument indicating the number
 * of variadic arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *tmp;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(args, char *);
		printf("%s", tmp != NULL ? tmp : "(nil)");
		if (i != n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
