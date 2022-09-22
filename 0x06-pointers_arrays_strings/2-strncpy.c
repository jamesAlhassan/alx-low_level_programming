#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *@dest: first parameter
 *@src: second parameter
 *@n: bytes from src
 *Return: resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
