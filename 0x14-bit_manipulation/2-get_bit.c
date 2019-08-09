#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}

/*
 *	unsigned int i;
 *	unsigned long int temp = 0, remainder = 0;
 *
 *	if (n == 0)
 *		return (0);
 *
 *	i = 0;
 *	while (n != 0 && i <= index)
 *	{
 *		temp = n;
 *		n = temp >> 1;
 *		remainder = temp - (2 * n);
 *		i++;
 *	}
 *	if (index >= i)
 *		return (-1);
 *	return (remainder);
 */
