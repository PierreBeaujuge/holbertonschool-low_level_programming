#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * natural - words
 *
 * @a: parameter hard-coded in main
 * @b: parameter hard-coded in main
 * @N: parameter hard-coded in main
 *
 * Return: sum of all the multiples, ans
 */

int natural(int a, int b, int N)
{
	int i;
	int j;
	int suma;
	int sumb;
	int ans;

/*
 * number of multiples
 */
	i = N / a;
	j = N / b;
/*
 * sum of i, j natural numbers for a, b (respectively)
 */
	suma = (i * (i + 1)) / 2;
	sumb = (j * (j + 1)) / 2;

/*
 * sum of multiples
 */
	ans = (a * suma) + (b * sumb);
	printf("%d\n", ans);
	return (0);
}
