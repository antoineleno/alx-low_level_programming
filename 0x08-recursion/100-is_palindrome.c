#include "main.h"
#include <string.h>
/**
 * is_palindrome - written function to check for palindrome string
 * @s: input string
 * Return: 0 if it is palindrome or 1 otherwise
*/

int is_palindrome(char *s)
{
int len = strlen(s);
return (help_is_palindrome(s, 0, len - 1));
}
/**
 * help_is_palindrome - to help for the checking
 * @s: input string
 * @start: indexe of the string's first character
 * @end: indexe of the string's last character
 * Return: 0 if it is palindrome or 1 otherwise
*/


int help_is_palindrome(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (help_is_palindrome(s, ++start, --end));
}
