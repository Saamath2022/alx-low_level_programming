#include "main.h"

/**
 * _strchr - Entry point
 * @s: Input
 * @c: Input
 * Return: Always 0 (Success).
 */
ji
char *_strchr(char *s, char, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
