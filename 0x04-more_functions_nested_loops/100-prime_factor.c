#include<stdio.h>
#include<stdlib.h>

/**
 * main - program that finds and prints the largest prime factor of number
 *
 * Return: void
 */

int main(void)
{
	int N = 100;
	int i;
	int m;

	for (i = 2; i < N; i++)
	{
		m = N % i;
		if (m == 0)
		{
			m = (N / i) % i;
		}
		printf("%d\n", m);
	}
	return (0);
}
