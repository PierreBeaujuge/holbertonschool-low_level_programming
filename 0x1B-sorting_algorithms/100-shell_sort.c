#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shell_sort - function that sorts an array of integers in ascending order
 * using the Shell sort algorithm. Using the following sequence of intervals
 * (a.k.a the Knuth sequence): n+1 = n * 3 + 1 (1, 4, 13, 40, 121, ...)
 * @array: pointer to the array of size "size"
 * @size: size of the array
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, gap = 0;
	int temp = 0;

	if (!array || size < 2)
		return;

	gap = 1;
	while (gap < size)
	{
		temp = gap;
		gap = gap * 3 + 1;
	}
	gap = temp;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
				array[j] = array[j - gap];
			array[j] = temp;
		}
			print_array(array, size);
		gap /= 3;
	}
}
