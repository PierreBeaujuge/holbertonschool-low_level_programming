#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: passed from main
 * @age: passed from main
 * @owner: passed from main
 *
 * Return: pointer to the struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr != NULL)
	{
		if (_strdup(name) != NULL)
		{
			if (_strdup(owner) != NULL)
			{
				ptr->name = _strdup(name);
				ptr->age = age;
				ptr->owner = _strdup(owner);
				return (ptr);
			}
			else
			{
				free(ptr->name);
				free(ptr);
			}
		}
		else
			free(ptr);
	}
	return (NULL);
}

/**
	dog_t *ptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		if (_strdup(name) == NULL || _strdup(owner) == NULL)
		{
			free(ptr);
			return (NULL);
		}
		ptr->name = _strdup(name);
		ptr->age = age;
		ptr->owner = _strdup(owner);
	}
	return (ptr);
*/

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: string of chars
 *
 * Return: address of the newly allocated memory
 */

char *_strdup(char *str)
{
	unsigned int len;
	unsigned int i, j;
	char *str_copy;
	char *tmp = str;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*str++)
		i++;
	len = i;
	str = tmp;

	str_copy = malloc(len * sizeof(char) + 1);
	if (str_copy == NULL)
		return (NULL);

	j = 0;
	while (j < len)
	{
		str_copy[j] = str[j];
		j++;
	}
	str_copy[j] = '\0';
	return (str_copy);
}
