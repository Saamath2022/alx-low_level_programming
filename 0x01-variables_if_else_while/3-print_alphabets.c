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

int main(void)
{
	char alp[26] - "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i =0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
