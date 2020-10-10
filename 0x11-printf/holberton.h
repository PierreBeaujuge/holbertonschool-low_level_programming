#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int _printf(const char *format, ...);
void print_number(int n, int *count);

/**
 * struct vartype - struct vartype
 *
 * @vartype: type of variable to be printed
 * @f: the function associated
 */

typedef struct vartype
{
	char *vartype;
	int (*f)(va_list);
} var_t;

int c_func(va_list args);
int s_func(va_list args);
int perc_func(va_list args);
int i_func(va_list args);
int d_func(va_list args);
int b_func(va_list args);
int rev_func(va_list args);
int rot_func(va_list args);

#endif /* HOLBERTON_H */
