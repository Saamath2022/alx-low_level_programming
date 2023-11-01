#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - Write a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * return: Always Nothing
 */

int main(int argc, char *argv[])
{
	int j;
	unsigned int u, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (
