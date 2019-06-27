#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: sum of all the multiples, ans
 */

int main(void)
{
	int a = 3;
	int b = 5;
	int N = 1023;
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
