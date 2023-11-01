#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - Program to adds positive numbers from command line
 * @argc: Number of commandline arg.
 * @argv: Array of Commandline argument strings.
 * Return: Always returns 0.
 */

int main(int argc, char *argv[])
{
	int i, num, sum = 0;
	char *endPtr;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
	num = strtol(argv[i], &endPtr, 10);
		if (*endPtr)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += num;
		}

	}
	printf("%d\n", sum);
	return (0);
}

