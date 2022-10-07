#include <stdlib.h>

/**
 * string_nconcat -concatenates two strings.
 * @s1: fisrt string to concat
 * @s2: second string to concat
 * @n: first number of s2 bytes
 * Return: pointer to concatenated strimg s1, NULL if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_Len, s2_Len, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_Len = 0; s1[s1_Len] != '\0'; s1_Len++)
		;

	for (s2_Len = 0; s2[s2_Len] != '\0'; s2_Len++)
		;

	s2_Len > n ? (s2_Len = n) : (n = s2_Len);
		s2_Len = n;

	ptr = malloc(s1_Len * sizeof(s1) + s2_Len * sizeof(s2));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (s1_Len + s2_Len + 1); i++)
	{
		i < s1_Len ? (ptr[i] = s1[i]) : (ptr[i] = s2[i - s1_Len]);
	}
	ptr[(s1_Len + s2_Len + 1)] = '\0';

	return (ptr);
}
