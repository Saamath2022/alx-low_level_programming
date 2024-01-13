#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - A function to return the length of a string
 * @s: string
 * Return: The legth of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
/**
 * comparator - compares the string character
 * @s: the string to compare
 * @n1: the parameter to be compared
 * @n2: the parameter to be compared
 * Return: the value
 */
int comparator(char *s, int n1, int n2)

{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrom - string detector
 * @s: string
 * Return: 1 otherwise 0.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
