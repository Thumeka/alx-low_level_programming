#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: vector
 *
 * Return: Error = 1, 0 if correct.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc != 5)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[2]) * atoi(argv[3]));
	}

	return (1);
}
