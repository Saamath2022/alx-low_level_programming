#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints the alphaet without
 * Return: 0 (Success aways)
 */

int main() {
	int number;
	
	for (number = 0; number <= 9; number++) {
		putchar(number + '0');
    }
	putchar('\n');
	return 0;
}
