#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: char
 *
 * Return: capitalize
 */

char *cap_string(char *s)
{
	int k, l;

	char a[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (k = 0; s[k] != '\0'; k++)
	{
		if (k == 0 && s[k] >= 'a' && s[k] <= 'z')
			s[k] -= 32;

		for (l = 0; l < 13; l++)
		{
			if (s[k] == a[l])
			{

				if (s[k + 1] >= 'a' && s[k + 1] <= 'z')
				{
					s[k + 1] -= 32;
				}
		}	}
	}

	return (s);
}
