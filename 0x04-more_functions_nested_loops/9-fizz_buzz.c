#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers from 1 to 100, followed by a new line
 * multiples of three print Fizz instead of the number
 * the multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int t;

	for (t = 1; t <= 100; t++)
	{
		if (t % 15 == 0)
			printf("FizzBuzz");
		else if (t % 3 == 0)
			printf("Fizz");
		else if (t % 5 == 0)
			printf("Buzz");
		else
			printf("%i", t);
		if (t < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
