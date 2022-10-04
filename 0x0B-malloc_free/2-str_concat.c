#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: fisrt string
 * @s2: second string
 * Return: pointer to the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, i = 0, j = 0, s1Len, s2Len;
	char *ptr;

	while (s1[i] != '\0')
	{
		s1Len++;
		i++;
	}
	while (s2[j] != '\0')
	{
		s2Len++;
		j++;
	}
	if (s1Len == 0 && s2Len == 0)
		return (NULL);
	ptr = malloc((s1Len + s2Len) * sizeof(char) + 2);

	if (ptr == NULL)
		return (NULL);

	for (a = 0, b = 0; a < (i + j + 1); a++)
	{
		if (a < 1)
			ptr[a] = s2[a];
		else
			ptr[a] = s2[b++];
	}
	return (ptr);
}
