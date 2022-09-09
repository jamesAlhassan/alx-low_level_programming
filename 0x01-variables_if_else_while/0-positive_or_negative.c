#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Checks if positive,zero or negative 
 *return : 0 if success
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is %\ns", positive);
}
else if (n == 0)
{
printf("%d is %s" zero);
}
else
{
printf("%d is %s" negative);
}
return (0);
}
