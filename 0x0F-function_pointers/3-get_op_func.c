#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - This file should contain the function
 * that selects the correct function.
 * @s: char string
 *
 * Return: pointer t the corresponding function.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
