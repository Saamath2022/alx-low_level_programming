#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: The result always
 */

int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return 0;
}
