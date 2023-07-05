#include "main.h"
#include <string.h>

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0, strlen(s) - 1));
}

/**
 * check_palindrome - recursive helper function to check palindrome
 * @s: input string
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}
