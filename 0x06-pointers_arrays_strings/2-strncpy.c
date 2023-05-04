#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	while (n-- && (*dest++ = *src++))
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest);
}
