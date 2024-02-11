#include <stdio.h>
/**
 * get_endianness - Check the endianness of the system.
 * Return: 0 if big endian, if 1 little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *)&x;

	return ((int)*c);
}
