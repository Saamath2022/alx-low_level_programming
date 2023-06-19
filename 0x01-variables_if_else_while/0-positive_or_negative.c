#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Dtermines if a number is positive or negative
 * Return: Always 0 (success)
 */

int main() {
	int num;

	num = 0;


	srand(time(0));
	num = rand() - RAND_MAX / 2;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	
	return (0);
}
