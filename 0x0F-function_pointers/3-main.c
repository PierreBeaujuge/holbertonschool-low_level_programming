#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of an operation, followed by a new line
 *
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: result of the operation
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int calc;
	int (*ptr)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
		printf("Error\n"), exit(98);
	if ((*argv[2] == '/' && num2 == 0) || (*argv[2] == '%' && num2 == 0))
		printf("Error\n"), exit(100);

	ptr = get_op_func(argv[2]);
	if (ptr != NULL)
	{
		calc = (*ptr)(num1, num2);
		printf("%d\n", calc);
		return (0);
	}
	else
		printf("Error\n"), exit(99);
	return (0);
}
