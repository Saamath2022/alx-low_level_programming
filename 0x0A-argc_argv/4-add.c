#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * main -  prints the sum of args positive numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: Always nothing
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int y, sum = 0;
	char *k;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			k = argv[i];
			for (y = 0; y < strlen(k); y++)
			{
				if (k[y] < 48 || k[y] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(k);
			k++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}


