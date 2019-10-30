#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Counting sort algorithm
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * Return: void
 *
 * Compile with:
 * gcc -Wall -Wextra -Werror -pedantic 102-main.c 102-counting_sort.c
 * print_array.c -o counting
 */

void counting_sort(int *array, size_t size)
{
	size_t i = 0, count = 0;
	int *sorted = NULL, *buf = NULL;

	if (!array || size < 2)
		return;
	count = max_arr(array, size) + 1; /*number of elements of buf*/


	sorted = malloc(sizeof(int) * size);
	buf = calloc(count, sizeof(int));
	for (i = 0; i < size; i++)
		buf[array[i]]++;
	for (i = 1; i < count; i++)
		buf[i] += buf[i - 1];
	print_array(buf, count);

	for (i = 0; i < size; i++)
	{
		sorted[buf[array[i]] - 1] = array[i];
		buf[array[i]]--;
	}
	for (i = 0; i < size; i++)
		array[i] = sorted[i];
	free(sorted);
	free(buf);
}

/**
 * max_arr - function that swaps two elements in an array
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
