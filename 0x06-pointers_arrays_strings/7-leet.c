#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * leet - encode into 1337 speak
 * @n: input value
 * Retuen: n value
 */

char *leet(char *str)
{
	char *encoded = (char*)malloc(strlen(str) + 1);
	int i, j;

	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

		if (c == 'a' || c == 'A')
			encoded[j++] = '4';
		else if (c == 'e' || c == 'E')
			encoded[j++] = '3';
		else if (c == 'o' || c == '0')
			encoded[j++] = '0';
		else if (c == 't' || c == 'T')
			encoded[j++] = '7';
		else if (c == 'l' || c == 'L')
			encoded[j++] = '1';
		else
			encoded[j++] = c;
	}
	encoded[j] = '\0';
	return (encoded);
}
