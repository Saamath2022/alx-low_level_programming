#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - programe that prints all the nubmers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar ((num % 10) + '0');

	for(la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
