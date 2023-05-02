#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 *
 * @str: char
 *
 * Return: void
 */

void puts_half(char *str)
{
	int half = 0, n;

	while (str[half] != '\0')
		half++;
	if (half + 1 % 2 != '0')
		n = (half - 1) / 2;
	else
		n = (half / 2);
	n++;

	for (half = n; str[half] != '\0'; half++)
		_putchar(str[half]);
	_putchar('\n');
}
