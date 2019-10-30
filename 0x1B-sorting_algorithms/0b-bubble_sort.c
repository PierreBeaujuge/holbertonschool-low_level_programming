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
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, flag = 0;
	/* int counter1 = 0, counter2 = 0; */

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
			/* counter1++; */
		}
		if (flag == 0)
			break;
		/* counter2++; */
	}
	/* printf("counter1: %i\n", counter1); */
	/* printf("counter2: %i\n", counter2); */
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

/*Note: can swap 1 and 2 or 2 and 1 indiferently*/
/*	temp = (*array)[idx1]; */
/*	(*array)[idx1] = (*array)[idx2]; */
/*	(*array)[idx2] = temp; */

	temp = (*array)[idx2];
	(*array)[idx2] = (*array)[idx1];
	(*array)[idx1] = temp;

/*Reminder: this synthax does not work!*/
/*	temp = *array[idx2]; */
/*      *array[idx2] = *array[idx1]; */
/*	*array[idx1] = temp; */
}
