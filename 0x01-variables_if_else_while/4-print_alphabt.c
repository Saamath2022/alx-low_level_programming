#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Succes)
 */

int main() {
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++) {
		if (letter != 'q' && letter != 'e') {
			putchar(letter);
        }
    }
	putchar('\n');
	return 0;
}
