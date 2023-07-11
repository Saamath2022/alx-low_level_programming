#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/**
 * main - Entry point
 * @argc: This is the number
 * @argv: This is the array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	long result = 1;

	for (y = 1; y < argc; y++)
	{
		long num;
		char *p;

		errno = 0;
		num = strtol(argv[y], &p, 10);

		if (*p != '\0' || errno != 0)
		{
			fprintf(stderr, "Conversion of argv[%] failed!\n", y);
			exit(EXIT_FAILURE);
		}
		result *= num;
	}
	printf("%ld\n", result);

	return (EXIT_SUCCESS);
}
