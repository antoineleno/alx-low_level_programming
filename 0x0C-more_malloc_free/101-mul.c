#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @str: string
 * Return: Always 0 (Success)
*/

void _digits_checker(char *str);
void _print_message(void);
int _atoi(char *s);
int _print_number(int number);

int main(int argc, char *argv[])
{
	int result = 1, i, number1, number2;

	if (argc != 3)
	{
		_print_message();
		exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		_digits_checker(argv[i]);
	}
	number1 = _atoi(argv[1]);
	number2 = _atoi(argv[2]);
	result  = number1 * number2;
	_print_number(result);

	return (0);
}


/**
 * _print_message - Function to print a single character.
*/

void _print_message(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

/**
 * _digits_checker - Function to check if an argument is a digit
 * @str: argument to be check
 * Return: 0 is digits otherwise 1
*/
void _digits_checker(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			_print_message();
			exit(98);
		}
		str++;
	}
}



/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the int converted from the string
*/


int _atoi(char *s)
{
int i, d, n, len, f, digit;
i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (i < len && f == 0)
{
if (s[i] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
return (n);
}

/**
 * _print_digit - Function to print intenger
 * @number: Number to be printed
 * Return: Nothing to be return
*/

int _print_number(int number)
{
	int remainder, j, i;
	int *result;
	int temp = number;
	int digitcount = 0;

	while (temp > 0)
	{
		temp = temp / 10;
		digitcount++;
	}
	result = malloc(digitcount);
	i = digitcount - 1;
	while (number > 0)
	{
		remainder = number % 10;
		result[i] = remainder + '0';
		number = number / 10;
		i--;
	}

	for (j = 0; j < digitcount; j++)
	{
		_putchar(result[j]);
	}
	_putchar('\n');
	return (0);
}
