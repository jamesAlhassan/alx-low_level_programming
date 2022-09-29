/**
  * helperfunc - checks recursively the input from is_prime_number
  * @n: iterator
  * @base: base number
  * Return: 1 if prime, else return 0.
  */
int helperfunc(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (helperfunc(n + 1, base));
	return (1);
}

/**
 * is_prime_number - check if number is prime
 * @n: number to check
 * Return: 1 if prime, 0 if otherwise
 */

int is_prime_number(int n)
{
	return (helperfunc(2, n));
}
