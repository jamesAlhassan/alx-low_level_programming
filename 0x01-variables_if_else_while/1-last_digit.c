#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Checks if number is greater or less and prints a string
 * Return: 0 if success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n % 10 > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if (n % 10 == 0)
{
printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
else if (n % 10 < 6 && n % 10 != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
return (0);
}
