#include <stdlib.h>

/**
 * malloc_checked -allocates memory using malloc.
 * @b: size of memory to allocate
 * Return: pointer to the memory if b not NULL, else 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
