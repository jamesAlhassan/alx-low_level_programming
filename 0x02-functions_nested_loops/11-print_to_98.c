#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from n to 98
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n < 'b')
{
_putchar(n);
_putchar(',');
_putchar(' ');
n++;
}
else if (n <= 'b')
{
_putchar('b');
}
else if (n == 'b')
{
_putchar(n);
}
else if (n > 'b')
{
_putchar(n);
_putchar(',');
_putchar(' ');
n--;
}
else if (n >= 'b')
{
_putchar('b');
}
}
