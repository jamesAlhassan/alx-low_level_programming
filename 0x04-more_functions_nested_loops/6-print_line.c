#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: parameter
 * Return: n
 */
void print_line(int n)
{
if (n > 0)
{
_putchar(95);
n++;
}
else
{
_putchar('\n');
}
}
