#include <stdio.h>
/**
 * main - Prints numbers from 0-9
 * Return: 0 if success
 */
int main(void)
{
int num;
for (num = '0'; num <'10'; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
