#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a: parameter passed from main
 * @b: parameter passed from main
 *
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction
 * @a: parameter passed from main
 * @b: parameter passed from main
 *
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: parameter passed from main
 * @b: parameter passed from main
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: parameter passed from main
 * @b: parameter passed from main
 *
 * Return: result
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n"), exit(100);
}

/**
 * op_mod - modulus
 * @a: parameter passed from main
 * @b: parameter passed from main
 *
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n"), exit(100);
}
