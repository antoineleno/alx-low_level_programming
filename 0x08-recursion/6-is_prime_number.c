#include "main.h"
/**
 * is_prime_number - a function made to identify a prime number
 * @n: input number
 * Return: 0 if it is not a prime number and 1 otherwise
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (help_is_prime_number(n, 2));
}
/**
 * help_is_prime_number - to help identifying the prime number
 * @n: input number
 * @i: the tester value
 * Return: 0 if it is not a prime number and 1 otherwise
*/

int help_is_prime_number(int n, int i)
{
if (n % i == 0)
{
return (0);
}
if (i * i > n)
{
return (1);
}
return (help_is_prime_number(n, i + 1));
}
