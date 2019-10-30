#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * quick_sort_hoare - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * Return: void
 */

void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_recurs(array, size, 0, size - 1);
}

/**
 * quick_sort_recurs - function that passess the start and end indexes of
 * the array segment to perform the partition and sorting recursion on
 * Note that in this scheme, the pivot is changing location early on in the
 * array, and the next two segments that the main algorithm recurs on
 * are (startIdx..pIdx) and (pIdx+1..endIdx) as opposed to (startIdx..pIdx-1)
 * and (pIdx+1..endIdx) as in Lomuto’s scheme.
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * @startIdx: starting index point
 * @endIdx: ending index point
 * Return: void
 */

void quick_sort_recurs(int *array, size_t size, size_t startIdx, size_t endIdx)
{
	size_t pIdx;

	if (endIdx > startIdx)
	{
		pIdx = partition(array, size, startIdx, endIdx);
		if (pIdx != startIdx)
			quick_sort_recurs(array, size, startIdx, pIdx - 1);
		quick_sort_recurs(array, size, pIdx, endIdx);
	}
}

/**
 * partition - function that sets a "pivot" in the array and tries to splits it
 * into numbers smaller (left side, unsorted) and larger than the pivot
 * (right side, unsorted)
 * Note that in this scheme, the pivot is changing location early on in the
 * array, and the next two segments that the main algorithm recurs on
 * are (startIdx..pIdx) and (pIdx+1..endIdx) as opposed to (startIdx..pIdx-1)
 * and (pIdx+1..endIdx) as in Lomuto’s scheme.
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * @startIdx: starting index point
 * @endIdx: ending index point
 * Return: pivot index in the array (around which the recursion will occur)
 */

int partition(int *array, size_t size, size_t startIdx, size_t endIdx)
{
	size_t i = startIdx - 1, j = endIdx + 1;
	int pivot = array[endIdx];

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);
		do {
			j--;
		} while (array[j] > pivot);
		if (i < j)
		{
			swap(&array, i, j);
			print_array(array, size);
		}
		else
			return (i);
	}
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
