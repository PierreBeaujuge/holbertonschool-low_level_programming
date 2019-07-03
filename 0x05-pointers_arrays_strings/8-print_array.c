#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line
 *
 * @a: parameter defined in main
 * @n: parameter defined in main
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
			if (j < n - 1)
			{
				printf("%d, ", a[j]);
			}
			else
			{
				printf("%d\n", a[j]);
			}
	}
	else
	{
		printf("%d\n", 0);
	}
}
