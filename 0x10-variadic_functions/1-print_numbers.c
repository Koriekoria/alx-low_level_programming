#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @n: number of integers passed to the function
 * @separator: the string to be printed between numbers
 * Return: 0 always
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;

	va_start(ls, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ls, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ls);
}
