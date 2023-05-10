#include "main.h"

/**
 * helper - to solve sqrt recursion
 * @n: number
 * @t: integer
 * Return: if no square root -1.
 */

int helper(int n, int t)
{
	if  (n * n == t)
	{
		return (n);
	}

	else if (n * n > t)
	{
		return (-1);
	}

	return (helper(n + 1, t));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: number square
 *
 * Return: if no square root -1.
 */

int _sqrt_recursion(int n)
{
	return (helper(1, n));
}

