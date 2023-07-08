#include "main.h"
#include <stdio.h>

/**
 * main - Prints all the arguments
 * @argc: input argument count
 * @argv: input array of vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}
	return (0);
}
