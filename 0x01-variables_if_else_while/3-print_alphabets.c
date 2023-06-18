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

int main() {
	char low;

	for (low = 'a'; low <= 'z' low++)
	putchar(low);

	for (low + 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return 0;
}
