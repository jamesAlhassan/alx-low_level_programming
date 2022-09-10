#include <stdio.h>
/**
 * main - Prints alphabets excluding q and e in  lower case
 * Return: 0 if success
 */
int main(void)
{
char alphabet = 'a';
if (alphabet <= 'z' && alphabet != 'g' && alphabet != 'e')
{
putchar('alphabet');
alphabet++;
}
putchar('\n');
return (0);
}
