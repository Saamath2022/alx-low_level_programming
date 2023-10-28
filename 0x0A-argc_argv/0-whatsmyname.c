#include <stdio.h>

/**
 * main - Printthe program  name
 * @argc: Arg count
 * @argv: Argument vector
 * Return: Void
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		for (int i = 0; argv[0][i] != '\0'; i++)
		{
			putchar(argv[0][i]);
		}
		putchar('\n');
	}
	else
	{
		printf("The program name is Learning SE with ALX\n");
	}
	return (0);
}
