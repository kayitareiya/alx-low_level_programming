#include "main.h"

int natural_sqrt_recursion(int n, int temp);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - finds the natural square root
 * @n: number
 * @temp: number
 *
 * Return: square root.
 */
int natural_sqrt_recursion(int n, int temp)
{
	if (temp * temp > n)
		return (-1);
	if (temp * temp == n)
		return (temp);
	return (natural_sqrt_recursion(n, temp + 1));
}


