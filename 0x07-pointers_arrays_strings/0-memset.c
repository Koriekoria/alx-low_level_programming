#include "main.h"

/**
 * _memset - fills the memory with constant bytes
 * @s: pointer block of the memory to fill
 * @b: values to set
 * @n: bytes of the memory
 * Return: destination
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
