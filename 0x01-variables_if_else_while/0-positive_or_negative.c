#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Dtermines if a number is positive or negative
 * Return: Always 0 (success)
 */

int main() 
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is negative", n);
	}
	else if(n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	
	return (0);
}
