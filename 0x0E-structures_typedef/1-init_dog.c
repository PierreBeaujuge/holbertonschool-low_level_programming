#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer argument passed from main
 * @name: passed from main
 * @age: passed from main
 * @owner: passed from main
 *
 * Description: function that initialize a variable of type struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
