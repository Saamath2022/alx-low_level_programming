#include <stdio.h>
/**
 * print_binary - Prints the Binary representation of a number
 * @n: Integer parameter to be used
 * Return: Always 0 (successfully)
 */

void print_binary(unsigned long int n)
{
	int i;

	int num_bits = sizeof(unsigned long int) * 8;

	for (i = num_bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if (n & mask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}
