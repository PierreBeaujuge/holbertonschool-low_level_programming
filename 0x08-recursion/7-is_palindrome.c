#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: parameter defined in main, pointer to memory (string)
 *
 * Return: integer, length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not
 *
 * @s: parameter defined in main, pointer to memory (string)
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (tmp3(s, len));
}

/**
 * tmp3 - subfunction for is_palindrome
 *
 * @s: parameter defined in main, pointer to memory (string)
 * @len: string length, defined in is_palindrome function
 *
 * Return: 0 or 1
 */

int tmp3(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (tmp3(s + 1, len - 2));
	}
	else
		return (0);
}
