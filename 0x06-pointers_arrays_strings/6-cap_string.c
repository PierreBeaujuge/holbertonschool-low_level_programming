#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @s: parameter defined in main
 *
 * Return: memory address of function (string)
 */

char *cap_string(char *s)
{
	char *tmp = s;

/*
 * Case for s[0]
 */
	for (; *s >= 'a' && *s <= 'z'; )
	{
		*s = *s - 32;
	}
	s++;
/*
 * Case for s[i>0]
 */
	while (*s != '\0')
	{
		if (*s == ' ' || *s == '\t' || *s == '\n' || *s == ',' ||
		    *s == ';' || *s == '.' || *s == '!' || *s == '?' ||
		    *s == '"' || *s == '(' || *s == ')' || *s == '{' ||
		    *s == '}')
		{
			s++;
			for (; *s >= 'a' && *s <= 'z'; )
			{
				*s = *s - 32;
			}
		}
		else
			s++;
	}
	s = tmp;
	return (s);
}
