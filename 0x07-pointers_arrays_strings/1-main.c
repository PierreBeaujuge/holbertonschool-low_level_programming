#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[98] = {0};
	char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	simple_print_buffer(buffer, 98);
	_memcpy(buffer + 50, buffer2, 10);
	printf("-------------------------------------------------\n");
	simple_print_buffer(buffer, 98);    
	return (0);
}
