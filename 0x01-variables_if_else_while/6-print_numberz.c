#include <stdio.h>
/**
 * main - Prints numbers from 0-9
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
putchar('\n');
return (0);
}
