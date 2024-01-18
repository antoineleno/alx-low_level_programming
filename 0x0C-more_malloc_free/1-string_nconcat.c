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

char *dest_string;
unsigned int i = 0, j = 0, length1 = 0, length2 = 0;

while (s1 && s1[length1])
{
length1++;
}
while (s2 && s2[length2])
{
length2++;
}
if (n < length2)
{
dest_string = malloc((length1 + n + 1) * sizeof(char));
}
else
{
dest_string = malloc((length1 + length2 + 1) * sizeof(char));
}
if (dest_string == NULL)
{
return (NULL);
}
while (i < length1)
{
dest_string[i] = s1[i];
i++;
}
while (n < length2 && i < (length1 + n))
{
dest_string[i++] = s2[j++];
}
while (n >= length2 && i < (length1 + length2))
{
dest_string[i++] = s2[j++];
}
dest_string[i] = '\0';
return (dest_string);
}
