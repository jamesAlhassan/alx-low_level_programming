#include<stdio.h>
/**
 * main - Prints the sizes of various data types on different systems
 * Return: 0 if success
 */

int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of an int: %d byte(s)\n", sizeof(b));
printf("Size of a long int: %ld byte(s)\n", sizeof(c));
printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(e));

return (0);
}


