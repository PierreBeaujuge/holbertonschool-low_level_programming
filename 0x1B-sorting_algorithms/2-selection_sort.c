#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * Return: void
 *
 * Compile with:
 * gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c
 * print_array.c -o select
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, minIdx = 0, flag = 0;
	int minArray = 0;

	if (!array || size < 2)
		return;
	for (j = 0; j < size - 2; j++)
	{
		flag = 0;
		minArray = array[j];
		for (i = j; i < size - 1; i++)
		{
			if (minArray > array[i + 1])
			{
				minArray = array[i + 1];
				minIdx = i + 1;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			swap(&array, j, minIdx);
			print_array(array, size);
		}
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
