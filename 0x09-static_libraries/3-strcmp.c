#include "main.h"
#include <stdlib.h>
/**
 * strcmp: compare pointers to two strings
 * @s1: a pointer to the first string to be comparedd
 * @s2: A pointer to the second sring to be compared.
 * If str1 == str2, 0
 * If str1 > str2,the positive difference of the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}

