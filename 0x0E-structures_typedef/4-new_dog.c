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

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr != NULL)
	{
		ptr->name = _strdup(name);
		if (ptr->name == NULL)
		{
			free(ptr->name);
			free(ptr);
			return (NULL);
		}
		ptr->age = age;
		ptr->owner = _strdup(owner);
		if (ptr->owner == NULL)
		{
			free(ptr->name);
			free(ptr->owner);
			free(ptr);
			return (NULL);
		}
		return (ptr);
	}
	return (NULL);
}

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
