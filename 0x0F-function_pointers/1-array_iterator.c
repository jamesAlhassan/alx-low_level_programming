#include <stdio.h>

/**
 * array_iterator - executes a function on param of each array element.
 * @array: an array
 * @size: size of array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}

