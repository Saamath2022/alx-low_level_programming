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

	for (x = 0; x < 9; x++)
	{
		putchar(x);
		if (x < '7')
		{	putchar (8);
			putchar (7);
        	}
    	}
	putchar('\n');
	return (0);
}
