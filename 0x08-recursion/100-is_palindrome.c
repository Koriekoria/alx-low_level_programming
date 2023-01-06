#include "main.h"

int checker(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checker(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - checks the characters
 * @s: string
 * @len: length
 * @i:iterator
 * Return: 1 or 0
 */

int checker(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (checker(s, i + 1, len - 1));
}
