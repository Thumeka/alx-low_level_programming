#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int con = 0;
	int j = 0;

	if (b == NULL)
		return (0);

	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		con <<= 1;
		con += b[j] - '0';
		j++;
	}
	return (con);
}
