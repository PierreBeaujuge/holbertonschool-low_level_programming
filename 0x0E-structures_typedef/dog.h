#ifndef DOG_H
#define DOG_H

int _putchar(char c);

/**
 * struct dog - creates profile with name, age, owner elements
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: creates profile with name, age, owner elements
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
