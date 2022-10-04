#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, strCount;

	if (str == NULL)
		return (NULL);

	while (str[i] != 0)
		i++;

	ptr = malloc(i * sizeof(str) + 1);

	for (strCount = 0; strCount <= i; strCount++)
	{
		ptr[strCount] = str[strCount];
	}
	return (ptr);
}
