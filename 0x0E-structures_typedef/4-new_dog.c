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
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
