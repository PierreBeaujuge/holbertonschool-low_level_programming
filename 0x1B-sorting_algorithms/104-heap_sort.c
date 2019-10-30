#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * heap_sort - function that sorts an array of integers in ascending order
 * using the Heap sort algorithm
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * Return: void
 *
 * Compile with:
 * gcc -Wall -Wextra -Werror -pedantic 104-main.c 104-heap_sort.c
 * print_array.c -o heap
 */

void heap_sort(int *array, size_t size)
{
	size_t endIdx = 0;

	if (!array || size < 2)
		return;
	heapify(array, size);
	endIdx = size - 1;

	while (endIdx > 0)
	{
		swap(&array, 0, endIdx);
		print_array(array, size);
		endIdx = endIdx - 1;
		siftDown(array, size, 0, endIdx);
	}
}

/**
 * heapify - function that makes a heap from the unsorted array
 * A heap is a sorted binary tree for which the highest number is
 * at the root
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * Return: void
 */

void heapify(int *array, size_t size)
{
	ssize_t startIdx = 0;

	startIdx = ((size - 1) - 1) / 2;

	while (startIdx >= 0)
	{
		siftDown(array, size, (size_t)startIdx, size - 1);
		startIdx = startIdx - 1;
	}
}

/**
 * siftDown - function that repairs the heap whose root element
 * is at index 'startIdx'
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * @startIdx: starting index point
 * @endIdx: ending index point
 * Return: void
 */

void siftDown(int *array, size_t size, size_t startIdx, size_t endIdx)
{
	size_t root = 0, child = 0, swapIdx = 0;

	root = startIdx;

	while (2 * root + 1 <= endIdx)
	{
		child = 2 * root + 1;
		swapIdx = root;
		if (array[swapIdx] < array[child])
			swapIdx = child;
		if (child + 1 <= endIdx && array[swapIdx] < array[child + 1])
			swapIdx = child + 1;
		if (swapIdx == root)
			return;
		swap(&array, root, swapIdx);
		print_array(array, size);
		root = swapIdx;
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
