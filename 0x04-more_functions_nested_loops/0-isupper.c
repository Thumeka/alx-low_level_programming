#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character.
 *@c: character
 * Return: 0 otherwise and 1 if c is uppercase.
 */

int _isupper(int c)
{

	if (c >= 'A' && c >= 'Z')
		return (1);
	return (0);
}
