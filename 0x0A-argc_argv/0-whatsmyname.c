#include <stdio.h>
#include "main.h"

/**
 * main - Functions that print its name
 * @argc: arg count
 * @argv: arg vector
 * Return: Alway nothing
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

