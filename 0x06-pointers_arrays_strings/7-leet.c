#include "holberton.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 *
 * @s: parameter defined in main
 *
 * Return: memory address of function (string)
 */

char *leet(char *s)
{
	char *tmp1 = s;
	char *str1 = "oOlLeEaAtT";
	char *str2 = "0011334477";
	char *tmp2 = str1;
	char *tmp3 = str2;

	while (*s != '\0')
	{
		while (*str1 != '\0')
		{
			if (*s == *str1)
			{
				*s = *str2;
			}
			str1++;
			str2++;
		}
		str1 = tmp2;
		str2 = tmp3;
		s++;
	}
	s = tmp1;
	return (s);
}
/*
 *	int i;
 *	char *tmp1 = s;
 *	char str1[] = "oOlLeEaAtT";
 *	char str2[] = "0011334477";
 *
 *	while (*s != '\0')
 *	{
 *		i = 0;
 *		while (str1[i] != '\0')
 *		{
 *			if (*s == str1[i])
 *			{
 *				*s = str2[i];
 *			}
 *			i++;
 *		}
 *		s++;
 *	}
 *	s = tmp1;
 *	return (s);
 */
