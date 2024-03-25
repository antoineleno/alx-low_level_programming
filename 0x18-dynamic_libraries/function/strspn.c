#include "main.h"
/**
 * _strspn - Function
 * @s: string
 * @accept: accept
 * Return: The position
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found = 0;

while (*s && !found)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
count++;
found = 1;
break;
}
a++;
}
if (!found)
{
return (count);
}
s++;
}
return (count);
}
