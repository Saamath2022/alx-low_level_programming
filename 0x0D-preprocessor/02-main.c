#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define VER 3
/**
 * main - Prints the name of the file
 * Return: Always 0.
 */

int main(void)
{
	printf("File: %s\n", __FILE__);
	printf("Date: %s\n", __DATE__);
	printf("Time: %s\n", __TIME__);
	printf("ANSI: %d\n", __STDC__);
	printf("Line: %d\n", __LINE__);

	return (0);
}

