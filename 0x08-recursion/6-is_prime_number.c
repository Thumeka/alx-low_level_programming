#include "main.h"

/**
 * helper - checks for prime number.
 * @n: number
 * @t: checker
 *
 * Return: 1 otherwise 0.
 */

int helper(int n, int t)
{
	if (t % n == 0 || t < 2)
	{
		return (0);
	}

	else if (n == t - 1)
	{
		return (1);
	}

	else if (t > n)
	{
		return (helper(n + 1, t));
	}

	return (1);
}

/**
 * is_prime_number - return a prime number
 * @n: number
 *
 * Return: 1 otherwise 0.
 */

int is_prime_number(int n)
{
	return (helper(2, n));
}
