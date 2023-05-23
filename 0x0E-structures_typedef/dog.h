#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog.
 * @name: char
 * @age: int
 * @owner: char
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#include <stdlib.h>
#include <stdio.h>

#endif /* DOG_H */
