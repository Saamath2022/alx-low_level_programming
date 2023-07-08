#include <stdio.h>

/**
 * main - Prints the number of argument
 * @argc: input argument count
 * @argv: input argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}


