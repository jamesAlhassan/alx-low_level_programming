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
int lastDigit = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);  }
else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else if (lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
return (0);
}
