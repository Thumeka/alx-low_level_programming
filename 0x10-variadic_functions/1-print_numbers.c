#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - that prints numbers, followed by a new line
 * @n: numbere
 * @separator: string printed
 *
 * Return: 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list args;

	va_start(args, n);

	if (separator != NULL)

		separator = "";

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(args, int));

		if (j < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
