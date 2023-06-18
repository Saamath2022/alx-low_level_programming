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
	int x;

	for (x = 1; x < 90; x++)
	{
		putchar(x);
		if (x < 90)
		{
			putchar(80);
			putchar(60);
		}
	}
	putchar('\n');
	return (0);
}
