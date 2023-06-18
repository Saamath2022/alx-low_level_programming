#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - write a function that prints all possible cominations of
 * single-digit numbers.
 * Return: Aways 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
    	{
		putchar (x + '0');
		if (x < 9)
		{
			putchar (',');
			putchar (' ');
		}

	}
	putchar ('\n');
	return (0);
}
