#include "main.h"

/**
 * _isdigit - Write a function that checks for digit(0 through 9).
 *@c: character
 * Return: 0 otherwise and 1 if c is digit.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
