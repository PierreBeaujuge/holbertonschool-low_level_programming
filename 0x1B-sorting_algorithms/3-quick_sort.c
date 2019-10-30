#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * quick_sort - function that sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_recurs(array, size, 0, size - 1);
}

/**
 * quick_sort_recurs - function that passess the start and end indexes of
 * the array segment to perform the partition and sorting recursion on
 * Note that the pivot only swaps with array[pIdx] just before the partition
 * function returns, otherwise it is pinned to the end of the array segment
 * during the partition function execution. The pIdx index returned is the
 * index of the pivot when the partition function returns. The next two
 * segments that the main algorithm recurs on are (startIdx..pIdx-1) and
 * (pIdx+1..endIdx) as opposed to (startIdx..pIdx)
 * and (pIdx+1..endIdx) as in Hoare’s scheme.
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
		if (pIdx != startIdx) /*this if statement is needed*/
			quick_sort_recurs(array, size, startIdx, pIdx - 1);
		quick_sort_recurs(array, size, pIdx + 1, endIdx);
	}
}

/**
 * partition - function that sets a "pivot" in the array and splits it into
 * numbers smaller (left side) and larger than the pivot (right side)
 * the two sides of the array are unsorted.
 * Note that the pivot only swaps with array[pIdx] just before the partition
 * function returns, otherwise it is pinned to the end of the array segment
 * during the partition function execution. The pIdx index returned is the
 * index of the pivot when the partition function returns. The next two
 * segments that the main algorithm recurs on are (startIdx..pIdx-1) and
 * (pIdx+1..endIdx) as opposed to (startIdx..pIdx)
 * and (pIdx+1..endIdx) as in Hoare’s scheme.
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * @startIdx: starting index point
 * @endIdx: ending index point
 * Return: pivot index in the array (around which the recursion will occur)
 */

int partition(int *array, size_t size, size_t startIdx, size_t endIdx)
{
	size_t i = startIdx, pIdx = startIdx;
	int pivot = array[endIdx];

	for (i = startIdx; i < endIdx; i++)
	{
		if (array[i] <= pivot)
		{
			if (i != pIdx)
			{
				swap(&array, pIdx, i);
				print_array(array, size);
			}
			pIdx = pIdx + 1;
		}
	}
	if (pIdx != endIdx)
	{
		swap(&array, pIdx, endIdx);
		print_array(array, size);
	}
	return (pIdx);
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
