#include "main.h"
#include <stdio.h>

/**
 * _is_prime - check if n is a prime number
 * @n: int
 * Return: 0 or 1
 */

int check_prime(int n, int othrn);
int is_prime_number(inti n)
{
	return(checkprime(n, 1);
}

/** 
 * check_prime: check all numbers if they are prime
 * @n: int
 * @prime: int
 * Return: int
 */

int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
else if (n % othrn == 1 || n <= 1)
	return (0);
	else
	return(check_prime(n, other + 1)
}


