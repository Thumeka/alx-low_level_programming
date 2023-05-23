#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 *
 * Return: new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n = 0, o = 0, c = 0;
	dog_t *bobby;

	if (name == NULL || owner == NULL)
		return (NULL);

	bobby = malloc(sizeof(dog_t));

	if (bobby == NULL)
		return (NULL);

	n = 0;
	while (name[n] != '\0')
		n++;

	bobby->name = malloc((n + 1) * sizeof(char));
	if (bobby->name == NULL)
	{
		free(bobby);
		return (NULL);
	}

	o = 0;
	while (owner[o] != '\0')
		o++;

	bobby->owner = malloc(o * sizeof(char));

	if (bobby->owner == NULL)
	{
		free(bobby->name);
		free(bobby);
		return (NULL);
	}
	for (c = 0; c < n; c++)
		bobby->name[c] = name[c];
	for (c = 0; c < o; c++)
		bobby->owner[c] = owner[c];
	bobby->age = age;
	return (bobby);
}
