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

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (name != NULL)
		ptr->name = name;
	else
	{
		free(ptr);
		return (NULL);
	}
	ptr->age = age;
	if (owner != NULL)
		ptr->owner = owner;
	else
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
