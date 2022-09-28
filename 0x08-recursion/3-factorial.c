/**
 * factorial - returns the factorial of a given number "n".
 * @n: computer factorial number
 * Return: factorial value
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n <= 1)
{
return (1);
}
return (n * factorial(n - 1));

}
