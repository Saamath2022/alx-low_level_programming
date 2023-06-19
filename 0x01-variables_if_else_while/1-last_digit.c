#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main last digit of n is greater than 5: the string and is greater than 5
 * Return 0 (Success)
 */

int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* your code goes there */
	a = n % 10;
	if (a > 5)
	{
		printf ("Last of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf ("Last digit of %d is %d and is 0\n", n, a);
	}
	else
	{
		printf ("Last digit of %d is %d and less than 6 is not 0\n", n, a);
	}

	return (0);
}
