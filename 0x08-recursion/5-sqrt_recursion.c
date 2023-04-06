#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of
 * a number
 * @n: the number to compute the square root of
 *
 * Return: the natural square root  of n, or -1
 * if n does not have  a natural number
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - helper function for_sqrt_recursion
 * @n: the number to compute the square root of
 * @i: the current guess for the square root
 *
 * Return: the natural square root of n, or -1
 * if n does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	return (sqrt_helper(n, i + 1));
}
