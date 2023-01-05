#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: destination of copied content
 * @src: data source
 * @n: bytes of the memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
