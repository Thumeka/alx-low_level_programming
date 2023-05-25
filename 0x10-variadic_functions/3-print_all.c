#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -  that prints anything.
 * @format: list arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int j = 0;
	char *s;
	const char *str = format;

	va_list form;

	va_start(form, format);

	while (str[j] != '\0')
	{
		switch (str[j])
		{
			case 'c':
				printf("%c", va_arg(form, int));
				break;
			case 'i':
				printf("%i", va_arg(form, int));
				break;

			case 'f':
				printf("%f", va_arg(form, double));
				break;

			case 's':
				s = va_arg(form, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;

			default:

				break;
		}
		if (str[j + 1] != '\0' && str[j] == 0)
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(form);
}
