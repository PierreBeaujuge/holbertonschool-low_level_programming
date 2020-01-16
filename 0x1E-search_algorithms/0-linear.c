#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value is the value to search for
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < (int)size; i++, array++)
	{
		printf("Value checked array[%i] = [%i]\n", i, *array);
		if (*array == value)
			return (i);
	}
	return (-1);
}
