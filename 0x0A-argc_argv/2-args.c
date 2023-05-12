#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it gets.
 * @argc: count
 * @argv: vector
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
