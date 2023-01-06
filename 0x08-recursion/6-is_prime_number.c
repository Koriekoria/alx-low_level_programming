#include "main.h"

/**
 * is_prime - finds prime numbers from input
 * @n: input
 * @i: iterator
 * Return: 1 if prime, 0 if not
 */

int is_prime(unsigned int n, unsigned int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime(n, i - 1));
}

/**
 * is_prime_number - shows an integer is prime number of note
 * @n: number to check
 * Return: results
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}
