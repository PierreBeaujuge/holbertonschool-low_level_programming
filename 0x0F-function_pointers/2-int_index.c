#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: pointer to the array defined in main
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if ((*cmp) != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*cmp)(array[i]);
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
