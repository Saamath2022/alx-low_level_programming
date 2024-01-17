#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code free memory
 * Return: Always 0.
 */

int main(void)
{
	size_t i, j;
	char *s;

	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		s[j] = s[j];
	}

	return (s);
}

