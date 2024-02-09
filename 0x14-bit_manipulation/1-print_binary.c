#include <stdio.h>

/**
 * _pow - function to calculate (base ^ power)
 * @base: base parameter
 * @power: power parameter
 * Return: value
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num = 1;
	unsigned int n;

	for (n = 0; n < power; n++)
	{
		num *= base;
	}
	return (num);
}

/**
 * print_binary - Prints the binary representation of a number
 * @n: Integer parameter to be used
 *
 * Description: This function prints the binary representation of a number.
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	int num_bits = sizeof(unsigned long int) * 8;
	int printed = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = num_bits - 1; i >= 0; i--)
	{
		unsigned long int mask = _pow(2, i);

		if (n & mask)
		{
			printf("1");
			printed = 1;
		}
		else if (printed)
		{
			printf("0");
		}
	}
	printf("\n");
}
