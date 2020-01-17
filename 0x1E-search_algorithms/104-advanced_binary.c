#include "search_algos.h"

int binary_search_recurse(int *array, int start, int end, int value);

/**
 * advanced_binary - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm, recursively
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value is the value to search for
 * Return: first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);
	i = binary_search_recurse(array, 0, size - 1, value);
	return (i);
}

/**
 * binary_search_recurse - recursion function
 * @array: pointer to the first element of the array to search in
 * @start: start index
 * @end: end index
 * @value: value is the value to search for
 * Return: first index where value is located
 */

int binary_search_recurse(int *array, int start, int end, int value)
{
	int i, mid;

	if (end < start)
		return (-1);
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
	{
		if (array[mid - 1] == value)
			return (binary_search_recurse(array, start, mid,
						      value));
		return (mid);
	}
	else if (value < array[mid])
		return (binary_search_recurse(array, start, mid - 1, value));
	else
		return (binary_search_recurse(array, mid + 1, end, value));
	return (-1);
}
