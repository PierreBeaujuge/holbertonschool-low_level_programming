#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: first parameter hard-coded in main
 * @b: second parameter hard-coded in main
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
