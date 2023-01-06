#include "main.h"

/**
 * power_operation - returns square root of a number
 * @n: input
 * @i: iterator
 * Return: result
 */

int power_operation(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (power_operation(n, i + 1));
}
/**
 * _sqrt_recursion - returns square root
 * @n: input
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (power_operation(n, 0));
}
