#include "main.h"

/**
 * wildcmp - To compares two strings
 * @s1: String to compare
 * @s2: string to compare
 * Return: the comparism value 1 for true 0 if not.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == *s1 || *s2 == '*')
	{
	if (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1))
		{
			return (1);
		}
	}
	if (*s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
