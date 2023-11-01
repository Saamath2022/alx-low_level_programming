#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints that print minimum number of coins
 * to make change for an amout of money.
 * @argc: Number of arguments commandline
 * @argv: Argument vector
 * Return: 0 - success, or-zero if fail.
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, leastcents = 0;
		int money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

	if (money <= 0)
	{
		printf("Error\n");
		return (1);
	}
	
	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			leastcents += money / cents[i];
			money = money % cents[i];
			if (money % cents[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
