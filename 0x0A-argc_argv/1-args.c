#include <stdio.h>

/**
 * main - prints its name with a new line.
 * @argc: count
 * @argv: vector
 *
 * Return: 0.
 */

int main(int argc, char *argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
