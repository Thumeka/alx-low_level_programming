#include "main.h"

/**
 * print_number - print a integer.
 * @n: integer
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int b;

	if (n < 0)
	{
		_putchar('-');

		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (b / 10)
		print_number(b / 10);

	_putchar(b % 10 + '0');
}
