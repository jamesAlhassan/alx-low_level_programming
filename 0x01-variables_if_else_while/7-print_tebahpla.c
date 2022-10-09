#include <stdio.h>
/**
 * main -Prints alphabets in reverse
 * Return: 0 if success
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}

	putchar('\n');

	return (0);
}
