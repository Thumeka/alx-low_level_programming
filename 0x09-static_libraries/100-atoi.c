#include "main.h"

/**
 * _atoi - Convert string to integer.
 * @s: char
 *
 * Return: Integer
 */

int _atoi(char *s)
{
	int j = 0;
	unsigned int ni = 0;
	int max = 1;
	int min = 0;

	while (s[j])
	{
		if (s[j] == 45)
		{
			max *= -1;
		}

		while (s[j] >= 48 && s[j] <= 57)
		{
			min = 1;
			ni = (ni * 10) + (s[j] - '0');
			j++;
		}

		if (min == 1)
		{
			break;
		}

		j++;
	}

	ni *= max;
	return (ni);
}
