#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 *
 * Return: Always 0 (Success)
 *
 */

int main() 
{
	char lc;
	for (lc = 'z'; lc <= 'Z'; lc ++)
	{
		putchar(lc);
	}
	putchar ('\n');

	return (0);
}
