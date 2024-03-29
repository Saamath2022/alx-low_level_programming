#include <stdio.h>

/**
 * binary_to_uint - Write function that converts
 * a binary number to unsigned int.
 * @b: Pointer to be used
 * Return: Char for b else 0 for NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
	result = result * 2 + (*b - '0');
	b++;
	}
	return (result);
}

