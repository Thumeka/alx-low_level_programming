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
	unsigned int n, o, a;
	dog_t *bobby;

	if (name == NULL || owner == NULL)
		return (NULL);

	bobby = malloc(sizeof(dog_t));

	if (bobby == NULL)
		return (NULL);

	for (n = 0; name[n]; n++)
		;
	n++;

	bobby->name = malloc(n * sizeof(char));

	if (bobby->name == NULL)
	{
		free(bobby);
		return (NULL);
	}

	for (a = 0; a < n; a++)
		bobby->name[a] = name[a];
	bobby->age = age;

	for (o = 0; owner[o]; o++)
		;
	o++;
	bobby->owner = malloc(o * sizeof(char));
	if (bobby->owner == NULL)
	{
		free(bobby->name);
		free(bobby);
		return (NULL);
	}
	for (a = 0; a < o; a++)
		bobby->owner[a] = owner[a];
	return (bobby);
}
