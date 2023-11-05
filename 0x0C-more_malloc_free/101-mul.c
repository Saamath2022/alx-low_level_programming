#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that multiplies two positive numbers
 * @argc1: Number of command - line arguments
 * @num2: Array of command-line argument strings.
 * Return: 0 on success, 98 on error.
 */

int main(int argc, char *argv[])
{
	unsigned int  num1, num2;
	int mul;

	if (argc != 3)
		printf("Error\n");
	return (98);
}

num_str = argv[1];
num_str = argv[2];
num1, num2, result;

for (i = 0; num1_str[i] != '0'; i++)
{
	if (!isdigit(num1_str[i]))
	{
		printf("Error\n");
		return (98);
	}
	}
	for (i = 0; num2_str[i] != '0'; i++)
	{
		if (!isdigit(num2_str[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	if (num < 0 || num < 0)
	{
		printf("Error\n");
		return (98);

	}

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
