#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: char
 *
 * Return: void
 */

void puts2(char *str)
{
	int first;

	for (first = 0; str[first] != '\0'; first++)
	if (first % 2 == 0)
		_putchar(str[first]);

	_putchar('\n');
}
