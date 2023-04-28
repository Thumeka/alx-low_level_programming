#include "main.h"

/**
 * print_line - Write a function that draws a
 * straight line in the terminal.
 * @n: line
 * Return: void
 */

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');

}
