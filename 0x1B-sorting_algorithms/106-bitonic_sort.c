#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * bitonic_sort - function that sorts an array of integers in ascending order
 * using the Bitonic sort algorithm
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * Return: void
 */

void bitonic_sort(int *array, size_t size)
{
	int up = 1; /*determines sorting in ascending order*/

	if (!array || size < 2)
		return;
	bitonic_sort_recurs(array, size, 0, size, up);
}

/**
 * bitonic_sort_recurs - function that first produces a bitonic sequence by
 * recursively sorting its two halves in opposite sorting orders, and
 * then calls bitonic_merge to make them in the same order
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * @startIdx: first index of the array sequence to be sorted
 * @count: number of elements of the array sequence to be sorted
 * @dir: 1 is direction is "up" (ascending), 0 if direction is "down"
 * Return: void
 */

void bitonic_sort_recurs(int *array, size_t size, size_t startIdx, size_t count, int dir)
{
	int k = 0;

	if (count > 1)
	{
                if (dir == 1)
                        printf("Merging [%lu/%lu] (UP):\n", count, size);
                if (dir == 0)
                        printf("Merging [%lu/%lu] (DOWN):\n", count, size);
		print_array(array + startIdx, count);

		k = count / 2;
		bitonic_sort_recurs(array, size, startIdx, k, 1);
		bitonic_sort_recurs(array, size, startIdx + k, k, 0);
		bitonic_merge(array, startIdx, count, dir);

                if (dir == 1)
                        printf("Result [%lu/%lu] (UP):\n", count, size);
                if (dir == 0)
                        printf("Result [%lu/%lu] (DOWN):\n", count, size);
                print_array(array + startIdx, count);
	}
}

/**
 * bitonic_merge - function that recursively sorts a bitonic sequence in
 * ascending order if dir = 1, and in descending order otherwise (dir = 0).
 * The sequence to be sorted starts at index position startIdx, the parameter
 * count is the number of elements to be sorted.
 * @array: pointer to the array of size "size"
 * @startIdx: first index of the array sequence to be sorted
 * @count: number of elements of the array sequence to be sorted
 * @dir: 1 is direction is "up" (ascending), 0 if direction is "down"
 * Return: void
 */

void bitonic_merge(int *array, size_t startIdx, size_t count, int dir)
{
        size_t k = 0, i = 0;

        if (count > 1)
        {
                k = count / 2;
		for (i = startIdx; i < startIdx + k; i++)
			bitonic_compare(array, i, i + k, dir);
		bitonic_merge(array, startIdx, k, dir);
		bitonic_merge(array, startIdx + k, k, dir);
	}
}

/**
 * bitonic_compare - function that compares two elements of the array.
 * The parameter dir indicates the sorting direction, ASCENDING (dir = up = 1)
 * or DESCENDING (dir = down = 0); if (array[idx1] > array[idx2]) agrees with
 * the direction, then array[idx1] and array[idx2] are swapped.
 * @array: pointer to the array of size "size"
 * @idx1: index of the first element
 * @idx2: index of the second element
 * @dir: 1 is direction is "up" (ascending), 0 if direction is "down"
 * Return: void
 */

void bitonic_compare(int *array, int idx1, int idx2, size_t dir)
{
	if ((array[idx1] > array[idx2]) == dir)
		swap(&array, idx1, idx2);
}

/**
 * swap - function that swaps two elements in an array
 * @array: double pointer to the array
 * @idx1: index of the first element
 * @idx2: index of the second element
 * Return: void
 */

void swap(int **array, int idx1, int idx2)
{
	int temp = 0;

	temp = (*array)[idx2];
	(*array)[idx2] = (*array)[idx1];
	(*array)[idx1] = temp;
}
