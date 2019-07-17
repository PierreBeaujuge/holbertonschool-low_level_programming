#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: pointer to a string of pointers to strings
 *
 * Return: address of the newly allocated memory
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int *len;
	int sumlen = 0;
	char *arg_concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = malloc(ac * sizeof(int));
	if (len == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		len[i - 1] = j;
		sumlen += len[i - 1];
	}

	arg_concat = malloc(sumlen * sizeof(char) + 1);
	if (arg_concat == NULL)
		return (NULL);

	k = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			arg_concat[k] = av[i][j];
		}
		arg_concat[k] = '\n';
		k++;
	}
	return (arg_concat);
}
