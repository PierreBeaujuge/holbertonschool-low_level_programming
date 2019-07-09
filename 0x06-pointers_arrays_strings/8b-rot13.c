#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 *
 * @s: parameter defined in main
 *
 * Return: memory address of function (string)
 */

char *rot13(char *s)
/*
 *	int i;
 *	char str1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
 *	char str2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
 *	char *tmp = s;
 *
 *	for (; *s != '\0'; s++)
 *		for (i = 0; i < 52; i++)
 *			if (*s == str1[i])
 *				*s = str2[i], i = 52;
 *	s = tmp;
 *	return (s);
 */

{
	char *tmp1 = s;
	char *str1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *str2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *tmp2 = str1;
	char *tmp3 = str2;

	while (*s != '\0')
	{
		while (*str1 != '\0')
		{
			if (*s == *str1)
			{
				*s = *str2;
				break;
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
 *	char *tmp1 = s;
 *	char *str1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
 *	char *str2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
 *	char *tmp2 = str1;
 *	char *tmp3 = str2;
 *
 *	for (; *s != '\0'; )
 *	{
 *		for (; *str1 != '\0'; )
 *		{
 *			if (*s == *str1)
 *			{
 *				*s = *str2;
 *                              break;
 *			}
 *			str1++;
 *			str2++;
 *		}
 *		str1 = tmp2;
 *		str2 = tmp3;
 *		s++;
 *	}
 *	s = tmp1;
 *	return (s);
 */

/*
 * Working but one too many if condition (else)
 *
 *	char *tmp = s;
 *
 *	while (*s != '\0')
 *	{
 *		if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
 *		{
 *			*s = *s + 13;
 *		}
 *		else
 *			while ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
 *			{
 *				*s = *s - 13;
 *			}
 *		s++;
 *	}
 *	s = tmp;
 *	return (s);
 */

/*
 * Working but one too many if condition (else if)
 *
 *	char *tmp = s;
 *
 *	while (*s != '\0')
 *	{
 *		if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
 *		{
 *			*s = *s + 13;
 *		}
 *		else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
 *		{
 *			*s = *s - 13;
 *		}
 *		s++;
 *	}
 *	s = tmp;
 *      return (s);
 */
