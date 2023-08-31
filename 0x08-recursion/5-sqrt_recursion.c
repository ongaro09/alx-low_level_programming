#include "main.h"

/**
 * find_sqrt - Helper function to find the square root recursively.
 *
 * @n: The number for which to find the square root.
 * @num: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if n
 * does not have a natural square root.
 */
int find_sqrt(int n, int num)
{
	if (num * num == n)
		return (num);

	if (num * num > n)
		return (-1);

	return (find_sqrt(n, num + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 *
 * @n: The number for which to find the square root.
 *
 * Return: The square root of n, or -1 if n does not
 * have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
