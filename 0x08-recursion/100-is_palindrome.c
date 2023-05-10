#include "main.h"

int check_palindrome(char *s, int i, int len);
int _last_index(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _last_index(s)));
}

/**
 * _last_index - returns the last index of a string counts the null char
 * @s: the string
 * Return: int
 */
int _last_index(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _last_index(s + 1));
}

/**
 * check_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
