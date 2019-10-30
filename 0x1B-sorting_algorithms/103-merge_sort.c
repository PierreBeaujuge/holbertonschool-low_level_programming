#include "sort.h"

/**
 * merge_sort - function that sorts an array of integers in ascending order
 * using the Merge sort algorithm
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * Return: void
 *
 * Compile with:
 * gcc -Wall -Wextra -Werror -pedantic 103-main.c 103-merge_sort.c
 * print_array.c -o merge
 */

void merge_sort(int *array, size_t size)
{
	size_t i = 0;
	int *buf = NULL;

	if (!array || size < 2)
		return;

	buf = malloc(sizeof(int) * size);
	if (buf == NULL)
		return;
	for (i = 0; i < size; i++)
		buf[i] = array[i];
	split_array(array, buf, 0, size);
	free(buf);
}

/**
 * split_array - function that splits an array of integers
 * the left segment is always smaller or equal in size to the
 * right segment
 * @array: pointer to the array of size "size"
 * @buf: pointer to an empty array of size "size"
 * @startIdx: first index of the array segment at hand
 * @endIdx: last index of the array segment at hand
 * Return: void
 */

void split_array(int *array, int *buf, size_t startIdx, size_t endIdx)
{
	int midIdx = 0;

	if (endIdx - startIdx > 1)
	{
		midIdx = (startIdx + endIdx) / 2;
		split_array(buf, array, startIdx, midIdx);
		split_array(buf, array, midIdx, endIdx);
		merge_array(buf, array, startIdx, endIdx);
	}
}

/**
 * merge_array - function that merges two array segments of integers
 * the left segment is always smaller or equal in size to the
 * right segment
 * @array: pointer to the array of size "size"
 * @buf: pointer to an empty array of size "size"
 * @startIdx: first index of the array segment at hand
 * @endIdx: last index of the array segment at hand
 * Return: void
 */

void merge_array(int *array, int *buf, size_t startIdx, size_t endIdx)
{
	size_t i = 0, j = 0, k = 0, midIdx = 0;

	i = startIdx;
	midIdx = (startIdx + endIdx) / 2;
	j = midIdx;

	printf("Merging...\n");
	printf("[left]: ");
	for (k = startIdx; k < midIdx; k++)
	{
		if (k < midIdx - 1)
			printf("%d, ", array[k]);
		else
			printf("%d\n", array[k]);
	}
	printf("[right]: ");
	for (k = midIdx; k < endIdx; k++)
	{
		if (k < endIdx - 1)
			printf("%d, ", array[k]);
		else
			printf("%d\n", array[k]);
	}
	for (k = startIdx; k < endIdx; k++)
	{
		if (i < midIdx && (j >= endIdx || array[i] <= array[j]))
			buf[k] = array[i], i++;
		else
			buf[k] = array[j], j++;
	}
	printf("[Done]: ");
	for (k = startIdx; k < endIdx; k++)
	{
		if (k < endIdx - 1)
			printf("%d, ", buf[k]);
		else
			printf("%d\n", buf[k]);
	}
}
