#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from n to 98
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n < 98)
{
printf(n);
_putchar(',');
_putchar(' ');
n++;
}
else if (n <= 98)
{
printf(n);
}
else if (n == 98)
{
printf(n);
}
else if (n > 98)
{
prontf(n);
_putchar(',');
_putchar(' ');
n--;
}
else if (n >= 98)
{
printf(n);
}
}
