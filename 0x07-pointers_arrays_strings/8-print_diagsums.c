#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: pointer to a square matrix of integers, defined in main
 *
 * @size: size of square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sumD1 = 0;
	int sumD2 = 0;

	i = 0;
	while (i < (size * size))
	{
		sumD1 += a[i];
		i = i + size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
	{
		sumD2 += a[i];
		i = i + (size - 1);
	}
	printf("%d, %d\n", sumD1, sumD2);
}
