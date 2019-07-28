#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void helper(char *str);

/**
 * struct vartype - struct vartype
 *
 * @vartype: type of variable to be printed
 * @f: the function associated
 */
typedef struct vartype
{
	char *vartype;
	void (*f)(va_list);
} var_t;

void c_char(va_list args);
void i_integer(va_list args);
void f_float(va_list args);
void s_string(va_list args);
#endif
