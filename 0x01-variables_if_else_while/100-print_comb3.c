#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a function to prints all possible different
 * combinations of two digits
 * Return: Alway 0: (Success)
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{

		putchar ((num1 % 10) + '0');
		putchar ((num2 % 10) + '0');

		if (num1 == 8 && num2 == 9)
		continue;
		putchar (',');
		putchar (' ');
		}
	}
		putchar ('\n');
	return (0);
}
