#include<stdio.h>
/**
 * main - Prints the sizes of various data types
 * Return : 0 if success
 */

int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

puts("Size of a char: %c byte(s)", sizeof(a));
puts("Size of an int: %d byte(s)", sizeof(b));
puts("Size of a long int: %ld byte(s)", sizeof(c));
puts("Size of a long long int: %lld byte(s)", sizeof(d));
puts("Size of a long int: %f byte(s)", sizeof(e));

return (0);
}


