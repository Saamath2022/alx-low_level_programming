#include "main.h"
#include <unistd.h>
/**
 * _memset - The first n bytes of the memory area
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * description _memset: over there.
 *
 * Return: A pointer to the filled mmory area @s.
 *
 */
Void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsighed char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
