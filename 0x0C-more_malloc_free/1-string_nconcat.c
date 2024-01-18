#include "main.h" 


/**
 * string_nconcat - Function to concatenate n characters from s2 to s1.
 * @s1: First string
 * @s2: Second string
 * @n: Number of characters from s2 to concatenate
 * Return: Concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1, len2, i, j;
    char *result;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = _strlen(s1);
    len2 = _strlen(s2);

    if (n >= len2)
        n = len2;

    result = malloc(len1 + n + 1);  // +1 for null terminator

    if (result == NULL)
        return NULL;

    for (i = 0; i < len1; i++)
        result[i] = s1[i];

    for (j = 0; j < n; j++)
        result[i++] = s2[j];

    result[i] = '\0';

    return result;
}
