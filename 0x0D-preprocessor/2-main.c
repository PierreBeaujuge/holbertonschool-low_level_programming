#include <stdio.h>
#include <stdlib.h>
#ifndef __FILE__
#define __FILE__
#endif

/**
 * main - program that prints the name of the file it was compiled from
 * followed by a new line
 *
 * Return: zero
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
