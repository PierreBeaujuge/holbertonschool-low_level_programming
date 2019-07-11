#include "holberton.h"

/**
 * is_prime_number - function that returns 1 if
 * the input integer is a prime number, otherwise return 0
 *
 * @n: parameter defined in main, integer
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (tmp2(n, 2, n / 2));
}

/**
 * tmp2 - subfunction for is_prime_number
 *
 * @n: integer, checked for prime
 * @i: prime number multiple to n (to be incremented)
 * @stop: stop dividing
 *
 * Return: 0 or 1
 */

int tmp2(int n, int i, int stop)
{
	if (n % i == 0 && i <= stop)
		return (0);
	else if (n % i != 0 && i <= stop)
		return (tmp2(n, i + 1, stop));
	else
		return (1);
}
