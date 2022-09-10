#include <stdio.h>
/**
 * main - Prints numbers of base 16
 * Return: 0 if success
 */
int main(void)
{
int hexdec = '0';
while (hexdec <= '9')
{
putchar(hexdec);
hexdec++
}
hexdec = 'a';
while (hexdec <= 'f')
{
putchar(hexdec);
hexdec++;
}
putchar('\n');
return (0);
}
