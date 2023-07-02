#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * of a string to upper
 * @str Change the string
 * Return: A pointer to the changes string.
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (st[index])
	{
		if (str[index] >= 'a' && str[index] <= '2')
			str[index] -= 32;
		index++;
	}
	return (str);
}
