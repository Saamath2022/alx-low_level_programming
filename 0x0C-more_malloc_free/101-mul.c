#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int _putchar(char c);
int isDigits(const char *str);
int multiply(int num1, int num2);
void printInteger(int num);
int main(int argc, char *argv[]);

/**
 * isDigits - checks if a string contains only digits.
 * @str: the string pointer.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int isDigits(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * multiply - multiplies two integers.
 * @num1: An integer to be multiplied.
 * @num2: An integer to be multiplied.
 *
 * Return: The result of the multiplication.
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * printInteger - prints an integer.
 * @num: An integer to be printed.
 *
 * Return: void.
 */
void printInteger(int num)
{
	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num / 10 != 0)
	{
		printInteger(num / 10);
	}
	putchar(num % 10 + '0');
}

/**
 * main - entry point of the program.
 * @argc: number of command-line arguments.
 * @argv: array of command-line argument strings.
 *
 * Return: 0 on success, 98 on incorrect number of arguments.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);
	printInteger(result);
	putchar('\n');

	return (0);
}
