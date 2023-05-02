#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse,
 * followed by a new line.
 * @s: char str
 *
 * Return: reverse string
 */

void print_rev(char *s)
{
	int j, rev;

	rev = 0;
	while (s[rev] != '\0')
		rev++;

	for (j = rev - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');

}
