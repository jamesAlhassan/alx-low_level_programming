#include "main.h"

/**
 * print_last_digit - prints the last digit of the given vakue
 * @value: the given value
 * Return: returns 0 if succcessful 1 if otherwise
 */

int print_last_digit(int value)
{
	int remainder = value % 10;

	if (remainder < 0)
	{
		remainder = -(remainder);
		_putchar(remainder + '0');
		return (remainder);
	}
	else
	{
		_putchar(remainder + '0');
		return (remainder);
	}
	return (0);
}
