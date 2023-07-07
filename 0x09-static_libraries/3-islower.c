#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - checks for lowercase character
 * @c: the character to check lowercase values
 * Return: 1 if c it true, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

