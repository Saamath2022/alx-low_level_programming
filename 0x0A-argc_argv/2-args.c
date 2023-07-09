#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
/**
 * main - Entry point for the program
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
