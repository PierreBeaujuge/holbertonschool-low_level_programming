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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);

#endif
