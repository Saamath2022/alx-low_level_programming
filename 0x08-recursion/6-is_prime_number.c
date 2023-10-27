#include <stdio.h>
#include "main.h"

int check_prime(int n, int i);
/**
 * is_prime_number - write a function that returns 1 if the input
 * integer is prime number else return 0.
 * @n: Integer input
 * Return: 1 else 0.
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - Check if number is prime
 * @n: the number to be checked
 * @i: the integer to be iterated
 * Return: 1 for prime or 0.
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
