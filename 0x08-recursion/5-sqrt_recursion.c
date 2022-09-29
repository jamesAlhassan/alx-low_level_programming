/**
 * helperfunc - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @base: base number
 * Return: natural square root of number base
 */
int helperfunc(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (helperfunc(n + 1, base));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (helperfunc(1, n));
}
