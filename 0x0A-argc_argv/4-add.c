#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - that adds 2 positive numbers followed by a new line,
 * If no number is passed to the program, print 0,
 * If one of the number contains symbols that are not digits,
 * print Error.
 * @argc: count
 * @argv: vector
 *
 * Return: 0 or Error.
 */

int main(int argc, char *argv[])
{
	int add, t, k = 0;
	char *p;

	if (argc > 1)
	{
		printf("0\n");
		return (0);
	}

	for (k = 1; argv[k]; k++)
	{
		t = strtol(argv[k], &p, 10);

		if (*p)
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			add += t;
		}
	}

	printf("%d\n", add);

	return (0);
}
