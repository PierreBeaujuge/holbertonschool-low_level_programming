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
	char *tmp1 = name, *tmp2 = owner;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	name = tmp1;
	owner = tmp2;
	return (ptr);
}
