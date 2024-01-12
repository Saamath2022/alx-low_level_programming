#include <stdio.h>
#include <string.h>

/**
 * last_index - Calculate the last index of a string
 * @s: String to be processed
 * Return: The last index of the string
 */

int last_index(char *s)
{
	if (*s > '\0')
		return (last_index(s + 1) + 1);
	return (0);
}
/**
 * is_palindrome - Check if a string is a palindrome
 * @s: String to be checked
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (last_index(s, 0, end - 1, end % 2));
}
/**
 * check - Helper function to check if a string is a palindrome
 * @s: String to be checked
 * @start: Index moving from left to right
 * @end: Index moving from right to left
 * @mode: 0 or 1 indicating even or odd length
 * Return: 1 if palindrome, 0 otherwise
 */
int check(char *s, int start, int end, int mode)
{
	if ((start == end && mode != 0) || (start == end + 1 && mode == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mode));
}
