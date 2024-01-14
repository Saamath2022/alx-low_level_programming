#include <stdio.h>
#include "main.h"
/**
 * main - Print a number with a new line
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always nothing
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
