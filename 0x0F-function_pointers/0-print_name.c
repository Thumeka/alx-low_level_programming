#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: to be printed char
 * @f: function pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
