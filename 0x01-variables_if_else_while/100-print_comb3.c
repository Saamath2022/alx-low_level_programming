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

	for (x = 1; x < 10; x++)
	{
		putchar(x);
		if (x < 89)
		{
			putchar (58);
			putchar (45);
		}
	}
	putchar('\n');
	return (0);
}
