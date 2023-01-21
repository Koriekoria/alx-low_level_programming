#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: 0 always
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ls;

	va_start(ls, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ls, int);

	va_end(ls);

	return (sum);
}
