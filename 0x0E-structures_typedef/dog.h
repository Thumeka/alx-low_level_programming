#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - Define a new type struct dog.
 * @name: char
 * @age: int
 * @owner: char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#include <stdlib.h>
#include <stdio.h>

#endif /* DOG_H */
