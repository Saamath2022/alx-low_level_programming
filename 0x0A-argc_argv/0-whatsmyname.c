#include "main.h"
#include <stdio.h>
/**
 * function - A program that print its name
 * @arg: arg count
 * @argv: argument vector
 * Return: Always zero
 */

int function(int arg, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
