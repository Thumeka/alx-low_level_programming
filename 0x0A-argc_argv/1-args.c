#include "main.h"
#include <stdio.h>

/**
 * main - prints number passed into it.
 * @argc: count
 * @argv: vector
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
