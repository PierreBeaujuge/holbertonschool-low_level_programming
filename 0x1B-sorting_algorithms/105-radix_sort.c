#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * radix_sort - function that sorts an array of integers in ascending order
 * using the Bitonic sort algorithm
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * Return: void
 *
 * Compile with:
 * gcc -Wall -Wextra -Werror -pedantic 106-main.c 106-bitonic_sort.c
 * print_array.c -o bitonic
 */

void radix_sort(int *array, size_t size)
{
	int max = 0, diviser = 0;

	if (!array || size < 2)
		return;
	max = max_arr(array, size);
	for (diviser = 1; max / diviser > 0; diviser *= 10)
	{
		count_sort(array, size, diviser);
		print_array(array, size);
	}
}

/**
 * count_sort - function that sorts an array of integers in ascending order
 * using a Counting sort algorithm tailored for Radix sort
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * @diviser: 10-multiple diviser that sets the digit rank of the values in the
 * array that will be used by count_sort to perform the sorting
 * Return: void
 */

void count_sort(int *array, int size, int diviser)
{
	int i = 0;
	int *sorted = NULL;
	int buf[10] = {0};

	sorted = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
		buf[(array[i] / diviser) % 10]++;
	for (i = 1; i < 10; i++)
		buf[i] += buf[i - 1];
	/* for (i = 0; i < size; i++) */ /*this line does NOT work*/
	for (i = size - 1; i >= 0; i--)
	{
		sorted[buf[(array[i] / diviser) % 10] - 1] = array[i];
		buf[(array[i] / diviser) % 10]--;
	}
	for (i = 0; i < size; i++)
		array[i] = sorted[i];
	free(sorted);
}

/**
 * max_arr - function that returns the max value of an array
 * @array: single pointer to the array
 * @size: size of the array
 * Return: max value of the array
 */

int max_arr(int *array, size_t size)
{
	size_t i = 0;
	int max = 0;

	for (i = 0; i < size; i++)
		if (max < array[i])
			max = array[i];
	return (max);
}
