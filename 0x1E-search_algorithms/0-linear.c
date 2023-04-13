#include "search_algos.h"

/**
 * linear_search - searches for  value in  arr of integers
 * @array: pointer to the 1st element of the array
 * @size: no. of elements in array
 * @value: value to search for
 * Return: first index where value is located
 *
 * If value is not present in array or if array is NULL return -1
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* iterate through array to find match */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}

	return (-1);
}
