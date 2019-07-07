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
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
		       (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'N' && s[i] <= 'Z') ||
			    (s[i] >= 'n' && s[i] <= 'z'))
				s[i] -= 13;
			else
				s[i] += 13;
			i++;
		}
		i++;
	}
	return (s);

/*
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
 *return (s);
 */
}
