#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value is the value to search for
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int i = 0, start = 0, end = (int)size - 1, mid = 0;

	if (!array)
		return (-1);
	while (end >= start)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%i", array[i]);
			if (i != end)
				printf(", ");
			else
				printf("\n");
		}
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
