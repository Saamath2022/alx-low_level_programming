#include <stdio.h>
void first(void) __attribute__((constructor));

/**
 * first - A function prints a sentence before main
 * Function is executed
 */

void first(void)
{
	printf("You are beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
