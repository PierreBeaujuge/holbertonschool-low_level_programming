#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number
 * @m: another number
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count = 0;

	xor = n ^ m;

	while (xor != 0)
	{
		if ((xor & 1) != 0)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
