#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime - a function that returns 1 if the input integer
 * ia a prime number
 * @n: integer parameter to be passed
 * Rreturn: Alway 1
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check of number is prime
 * @n: the number to be printed
 * @1: the iteation times
 * return: 1 for prime or compiste
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0)
	if (((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}

