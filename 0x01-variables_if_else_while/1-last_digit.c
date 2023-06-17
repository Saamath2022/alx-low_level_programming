#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the last digt of a randomly generated number
 * and if the number is grather 5, or less than or 0.
 * Return: The result always
 */

int main(void)
{
	int n;

	int m;

	srand(time(0));
	n= rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and less than 6 and is not 0\n",	n, m);
	return (0);
}
