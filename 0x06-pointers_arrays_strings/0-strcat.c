#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: first parameter
 * @src: second parameter
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int destLen = 0;

	while (dest[index++])
		destLen++;
	for (index = 0; src[index]; index++)
		dest[destLen++] = src[index];
	return (dest);
}
