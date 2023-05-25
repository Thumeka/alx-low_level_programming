#include "variadic_functions.h"
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
	va_list ap;

	va_start(ap, n);

	if (separator != NULL)

		separator = "";

	if (j < n - 1)
	{
		printf("%s", separator);
	}

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ap, int));
	}

	printf("\n");

	va_end(ap);
}
