#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into word
 * @str: Input string to split
 * Return: A pointer to an array of strings
 *
 */

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	return (NULL);
}

/**
 * print_tab - prints an array of strings
 * @tab: array of strings
 */

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - the main entry point of the program.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */

int main(void)
{
	char **tab;

	tab = strtow("     ALX School      #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
