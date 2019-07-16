#include "holberton.h"
#include "stdio.h"
#include "stdlib.h"

/**
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 *
 */

int wildcmp(char *s1, char *s2)
{
	len = _strlen_recursion(s1);

	return (tmp(s1, s2, len));
}

/**
 *
 */

int tmp(char *s1, char *s2, len)
{
	if (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
			return (tmp(s1 + 1, s2 +  1));
		else
			return (0);
	}
	return (1)
}
