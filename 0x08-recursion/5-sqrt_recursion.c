#include "main.h"

/**
 *  _sqrt_recursion - function that returns the natural square root of a number
 * @n: int
 * Return: natural square root  of a number
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - to find square root
 * @n: int to find squqre root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
