#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints to return the length of a string.
 *
 * @s: pointer
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}
