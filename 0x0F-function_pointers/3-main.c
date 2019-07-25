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

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
		printf("Error\n"), exit(98);
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
	    && *argv[2] != '/' && *argv[2] != '%')
		printf("Error\n"), exit(99);
	if ((*argv[2] == '/' && argv[3] == NULL) ||
	    (*argv[2] == '%' && argv[3] == NULL))
		printf("Error\n"), exit(100);

	calc = (get_op_func(argv[2]))(num1, num2);
	printf("%d\n", calc);
	return (0);
}
