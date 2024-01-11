#include <stdio.h>

/**
 * check_prime - Check if a number is prime
 * @n: Integer parameter to be checked
 * @source: Integer representing the current divisor
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int source)
{
	if( source >= n && n > 1)
		return (1);
	else if (n % source == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, source + 1));
}

/**
 * is_prime_number - Check if a number is a prime number
 * @n: Integer parameter to be checked
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

