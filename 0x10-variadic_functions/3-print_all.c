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
	char *str = "";

	va_list form;

	va_start(form, format);
	if (format != NULL)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", str, va_arg(form, int));
					break;
				case 'i':
					printf("%s%i", str, va_arg(form, int));
					break;
				case 'f':
					printf("%s%f", str, va_arg(form, double));
					break;
				case 's':
					s = va_arg(form, char*);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", str, s);
					break;
				default:
					j++;
					continue;
			}
			str = ", ";
			j++;
		}

	}
	printf("\n");
	va_end(form);
}
