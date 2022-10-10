#include "main.h"

/**
 * is_palindrome -  checks if a string is a palindrome.
 * @s: string to check
 * Return: 1 if true and 0 if otherwise
 */

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}


int is_palindrome(char *s)
{
	if ()
}
