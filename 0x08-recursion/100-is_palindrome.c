#include "main.h"


/**
 * is_palindrome - Function to check wether a string is palindrome or not.
 * @s: String to be checked.
 * Return: A if true  0 if not.
*/

int _strlen_recursion(char *s);

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	else
	{
		return (is_palindrome_helper(0, _strlen_recursion(s) - 1, s));
	}

}
/**
 * is_palindrome_helper - Function to helpe the function palindrome.
 * @start: Start of the string.
 * @end: End of the string.
 * @s: string to be checked.
 * Return: 1 if palidrome otherwise 0.
*/

int is_palindrome_helper(int start, int end, char *s)
{
	if (start >= end)
	{
		return (1);
	}

	else if (s[start] != s[end])
	{
		return (0);
	}

	else
	{
		return (is_palindrome_helper(++start, --end, s));
	}
}


int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
