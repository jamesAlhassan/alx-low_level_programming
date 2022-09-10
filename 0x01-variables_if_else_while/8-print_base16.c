#include <stdio.h>
/**
 * main - Prints numbers of base 16
 * Return: 0 if success
 */
int main(void)
{
int num = '0';
while (num <= '9')
{
putchar(num);
num++;
}
char alph = 'a';
while (alph <= 'f')
{
putchar(alph);
alph++
}
putchar('\n');
return (0);
}
