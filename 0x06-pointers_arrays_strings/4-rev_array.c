#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: parameter defined in main
 * @n: parameter defined in main
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *ptr1 = a;
	int *ptr2 = a + n - 1;
	int tmp;

	while (ptr1 < ptr2)
	{
		tmp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = tmp;
		ptr1++;
		ptr2--;
	}
}
