#include "main.h"

/**
 * puts2 - prints every other char of a string starting with the first char
 *
 * @str: pointer
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
