#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/**
 * main - Entry point
 * @argc: This is the number of argument count
 * @argv: This is the array of vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	long result = 1;
	int y;

	for (y = 1; y < argc; y++)
	{
		long num;
		char *p;

		/* attempt to conver argv[i] to integer*/
		errno = 0;
		num = strtol(argv[y], &p, 10);

	/* verify that conversion was successful*/
	if (p == argv[y])
	{
		fprintf(stderr, "Conversion of argv[%d] failed!\n", y);
		exit(EXIT_FAILURE);
	}

	if (errno == ERANGE)
	{
		fprintf(stderr, "Argument of argv[%d] out of range!\n", y);
		exit(EXIT_FAILURE);
	}
	/* conversion was succesful and the range was ok, so*/
	/* can now use the coverted number*/
	result = result * num;
	}

	/*print the sum*/
	printf("%ld\n", result);

	return (EXIT_SUCCESS);
}
