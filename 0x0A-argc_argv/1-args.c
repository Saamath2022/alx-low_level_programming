#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Argument count
 * @argv: argument vector
 * Return: nothing.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
