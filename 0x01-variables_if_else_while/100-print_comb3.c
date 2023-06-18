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

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
