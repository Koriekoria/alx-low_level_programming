#include "function_pointers.h"

/**
 * array_iterator - a function given as a parameter
 * @array: array to execute function
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
