#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isalpha - checks for the alphabetic character
 * @c: The alphabetic character to be checked
 * Return: 1 if true is a letter, 0 for false
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

