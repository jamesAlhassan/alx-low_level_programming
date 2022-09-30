#include "main.h"

/**
 * _strncat - a function that concatenates two stringswith  n *bytes from src
*@dest: first parameter
*@src: second parameter
*@n: bytes from src
*Return: resultin string "dest"
*/

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destLen = 0;

	while (dest[index++])
		destLen++;
	for (index = 0; src[index] && index < n; index++)
		dest[destLen++] = src[index];
	return (dest);
}
