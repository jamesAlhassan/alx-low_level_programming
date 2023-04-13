#include "search_algos.h"

/**
 * binary_search - searches for value in  sorted arr of integers
 * @array: pointer to 1st element of arr to search i
 * @size: no of elements in arr
 * @value: value to search for
 * Return: index where the value is located
 *
 * If value is not present in array or array is null return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t b = size - 1;
	size_t c, i;

	while (a <= b)
	{
		printf("Searching in array: ");
		for (i = a; i <= b; i++)
		{
			if (i == b)
				printf("%i", array[i]);
			else
				printf("%i, ", array[i]);
		}
		printf("\n");

		c = (a + b) / 2;
		if (value == array[c])
			return (c);
		else if (value < array[c])
			b = c - 1;
		else
			a = c + 1;

	}
	return (-1);
}
