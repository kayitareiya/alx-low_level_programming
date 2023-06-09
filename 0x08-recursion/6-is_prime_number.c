#include "main.h"

int prime_number(int n, int temp);

/**
 * is_prime_number - checks if number is prime
 * @n: number
 *
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}
/**
 * prime_number - finds prime number
 * @n: number
 * @temp: number
 *
 * Return: 1 or 0.
 */
int prime_number(int n, int temp)
{
	if (temp == 1)
		return (1);
	if (n % temp == 0 && temp > 0)
		return (0);
	return (prime_number(n, temp - 1));
}
