#include "main.h"

/**
 * *_strncat - copies a string
 * @dest: destination
 * @src: source
 * @n: number of bytes to concatenate
 * Return: result to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
