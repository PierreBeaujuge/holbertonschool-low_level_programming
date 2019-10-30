#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * Return: void
 *
 * Compile with:
 * gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c
 * print_array.c -o bubble
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, flag = 0;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array, j, j + 1);
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
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
