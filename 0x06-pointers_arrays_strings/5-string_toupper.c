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

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index]-= 32;
		indexi++;
	}
	return (str);
}
