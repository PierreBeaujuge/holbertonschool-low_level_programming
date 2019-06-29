#include<stdio.h>
#include<stdlib.h>

/**
 * main - program that finds and prints the largest prime factor of number N
 *
 * Return: void
 */

int main(void)
{
	long N = 612852475143;
	int i;
	int m;

	for (i = 2; i <= N; i++)
	{
		m = N % i;
		if (m == 0)
		{
			N = N / i;
			i--;
		}
	}
	printf("%d\n", i);
	return (0);
}
