#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 *  _strcpy - copy the string pointed by src to dest
 *  @src: char
 *  @dest: char
 *
 *  Return: 0.
 */

char *_strcpy(char *dest, char *src)
{
	int leng, j;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}
	for (j = 0; j < leng; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

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
	int ln1, ln2;
	dog_t *bobby;

	ln1 = _strlen(name);
	ln2 = _strlen(owner);

	bobby = malloc(sizeof(dog_t));
	if (bobby == NULL)
		return (NULL);

	bobby->name = malloc(sizeof(char) * (ln1 + 1));
	if (bobby->name == NULL)
	{
		free(bobby);
		return (NULL);
	}
	bobby->owner = malloc(sizeof(char) * (ln2 + 1));
	if (bobby->owner == NULL)
	{
		free(bobby);
		free(bobby->name);
		return (NULL);
	}

	_strcpy(bobby->name, name);
	_strcpy(bobby->owner, owner);
	bobby->age = age;

	return (bobby);
}
