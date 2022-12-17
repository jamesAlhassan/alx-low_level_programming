#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: 0 if s1 == s2, negative if s1 < s2 and positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
