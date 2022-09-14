#include "main.h"

/**
 * _islower - Checks lower case letters
 *
 * @c: the parament/character to check
 * Return: 0 if lower and 1 if otherwise
 * /

int  _islower(int c)
{
if (c >= 97 && c  <= 122)
{
		return (1);
}
else
{
    	return (0);
}
}
