#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * @argc: Argument counts
 * @argv: Argument vector
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	int x, i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	i = atoi(argv[2]);
	printf("%d\n", x * i);

	return (0);
}

