#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes it with a specific char
 * @size: array size
 * @c: char value of the array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size > 0)
	{
		ptr = (char *) malloc(size * sizeof(char));

		if (ptr == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
