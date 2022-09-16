#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: parameter
 * Return: n
 */
void print_line(int n)
{
if (n <= 0)
_putchar('\n');
while (n >= 1)
{
_putchar(95);
n++;
}
}
