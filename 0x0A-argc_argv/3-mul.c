#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Functions to trints the multiplication of two args numbers
 * @argc: input argument count
 * @argv; input argument array of vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc == 0)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else if
	{
		printf("Error\n");
		return (1);
	}
}
