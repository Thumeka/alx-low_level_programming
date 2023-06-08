#include <stdio.h>
#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first word
 * @m: second word
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int flip_b = 0;

	while (xor != 0)
	{
		flip_b += xor & 1;
		xor >>= 1;
	}

	return (flip_b);
}
