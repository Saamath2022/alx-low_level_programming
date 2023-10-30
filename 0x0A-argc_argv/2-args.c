#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments that recieveds.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always nothing
 */

int main(int argc, char *argv[])
{

	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
